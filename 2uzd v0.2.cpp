#include <bits/stdc++.h>
#include<limits>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::swap;
using std::numeric_limits;
using std::fixed;
using std::setprecision;
using std::setw;
using std::ifstream;
using std::stringstream;
struct pazymiai
{
    string vardas, pavarde;
    vector <int> pazymys={};
    double galutinis;
    pazymiai()
    {
        galutinis =0;
    }
};
int countWords(string str)
{
    // breaking input into word using string stream
    stringstream s(str); // Used for breaking words
    string word; // to store individual words

    int count = 0;
    while (s >> word)
        count++;
    return count;
}
void Rikiuoti(pazymiai M[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
           if(M[i].vardas>M[j].vardas)
              swap(M[i],M[j]);
}
void Rikiuoti1(pazymiai M[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
           if(M[i].pavarde>M[j].pavarde)
              swap(M[i],M[j]);
}
int main()
{
    ifstream fd("kursiokai.txt");
    pazymiai M[10000];
    int x=1, a=0;
    char MV;
    srand(time(NULL));
    cout <<"Ar norite duomenis nuskaityt is failo?" << endl;
    string nuskaitymas, line, dummyline;
    bool nuskaitymas2 = false;
    while(1)
    {
        cin >> nuskaitymas;
        if(nuskaitymas=="taip")
        {
            nuskaitymas2=true;
            break;
        }
        else if (nuskaitymas=="ne")
        {
            nuskaitymas2=false;
            break;
        }
        else {
            cin.clear();
            cin.ignore(500, '\n');
            cout << "KLAIDA. Irasykite 'taip' arba 'ne' " << endl;
        }
    }
    cout << "Jei galutini bala norite skauciuoti su mediana spauskite M, jei vidurkiu V " << endl;
    while(1)
    {
        cin >> MV;
        if(MV=='M' || MV=='V')
        {
            break;
        }
        else {
            cin.clear();
            cin.ignore(500, '\n');
            cout << "KLAIDA. Iveskite tinkama raide " << endl;
        }

    }

    if(nuskaitymas2==true)
    {
        getline(fd,dummyline);
        while(getline(fd, line))
    {
    stringstream ss (line);
    int numOfWords = countWords(line) - 3;
    int exam, suma=0;
    double mediana=0;
    ss >> M[a].pavarde >> M[a].vardas;
    //cout<<  M[a].pavarde << " " <<  M[a].vardas << " ";
    int temp;
    for (int i = 0; i < numOfWords; i++)
    {
        ss >> temp;
        suma+=temp;
        M[a].pazymys.push_back(temp); //
    }
    ss >> exam;
    if(MV=='V')
    M[a].galutinis =0.4*(suma/numOfWords)+ (0.6*exam);
    else if(MV=='M')
    {
        sort(M[a].pazymys.begin(),M[a].pazymys.end());
         if(numOfWords%2!=0)
            {
                int k=0, kint;
                k = numOfWords/2;
                kint = numOfWords;
                kint-= k;
                mediana = M[a].pazymys[kint-1];
            }
        else
            {
                int k=0;
                k=numOfWords/2;
                mediana = (M[a].pazymys[k-1]+M[a].pazymys[k])/2;
            }
        M[a].galutinis = (0.4*mediana) +(0.6*exam);
    }
    a++;
    x=a;
    }
    }
    else{
    for(int i=0; i < x; i++)
    {
    cout <<"Iveskite studento varda" << endl;
    cin >> M[i].vardas;
    cin.ignore();
    cin.clear();
    cout <<"Iveskite studento pavarde" << endl;
    cin >>M[i].pavarde;
    cout << "Ar norite namu darbu rezultatus sugeneruoti atsitiktinai?" << endl;
    string atsakymas;
    while(1)
    {
        cin >> atsakymas;
        if(atsakymas=="taip" || atsakymas=="ne")
        {
            break;
        }
        else {
            cin.clear();
            cin.ignore(500, '\n');
            cout << "KLAIDA. Irasykite 'taip' arba 'ne' " << endl;
        }
    }
    int a = 0;
    double kiekis =0, mediana = 0;
    double skc;
    if(atsakymas == "ne")
    {
        cout <<"Iveskite studento namu darbu rezultatus. Jei visus rezultatus suvedete iveskite '-1'" << endl;
    while(1)
    {
        cin >> skc;
        if(skc>10 || skc<-1)
        {
            cout << "Tokio pazymio nera, rasykite toliau " << endl;
        }
        if(a==0 && skc == 0)
        {
            cin.clear();
            cin.ignore(500, '\n');
            cout << "KLAIDA. Iveskite tinkama skaiciu " << endl;
        }
        else
        {
            if(!cin.fail() && skc <=10 && skc >=1 && skc==(int)skc)
        {
            M[i].pazymys.push_back(skc) ;
            a++;
            kiekis+=skc;
        }
            else if(skc!=(int)skc)cout << "KLAIDA. Iveskite naturalujy skaiciu" << endl;
        }
        if(cin.fail() || skc == 0)
           {
                cin.clear();
                cin.ignore(500, '\n');
                cout << "KLAIDA. Iveskite tinkama skaiciu " << endl;
           }
           if (a!=0 && skc ==-1)
                break;
    }
    }
    else{
        cout << "Kiek norite kad studentas turetu pazymiu? " << endl;
        double n;
        while(1)
        {
            cin >> n;
            if(!cin.fail() && n>0 && n==(int)n)
            {
                break;
            }
            else
            {
                cin.clear();
                cin.ignore(500, '\n');
                cout << "KLAIDA. skaicius negalimas ";
            }
        }
        for(int j=0; j < n; j++)
        {
            a++;
            M[i].pazymys.push_back(rand()%10+1) ;
            cout << M[i].pazymys[j] << endl;
            kiekis+=M[i].pazymys[j];
        }
    }
    cout << "Ar norite sugeneruoti egzamino rezultata?" << endl;
    string klausimas2;
     while(1)
    {
        cin >> klausimas2;
        if(klausimas2=="taip" || klausimas2=="ne")
        {
            break;
        }
        else {
            cin.clear();
            cin.ignore(500, '\n');
            cout << "KLAIDA. Irasykite 'taip' arba 'ne' " << endl;
        }
    }
    double egzaminas;
    if(klausimas2 == "ne")
    {
    cout <<"Iveskite studento egzamino rezultata" << endl;
    while(1)
        {
            cin >> egzaminas;
            if(!cin.fail() && egzaminas<=10 && egzaminas==(int)egzaminas && egzaminas>0 && egzaminas==(int)egzaminas  )
            {
               break;
            }
            else
            {
                  cin.clear();
                  cin.ignore(500, '\n');
                  cout << "KLAIDA. Iveskite tinkama egzamino rezultata desimtbaleje sistemoje " <<endl;
            }
        }

    }
    else if(klausimas2 == "taip")
    {
        egzaminas=rand()%10+1;
        cout << egzaminas << endl;
    }
    if(MV=='V')
    M[i].galutinis = 0.4*(kiekis/a)+ (0.6*egzaminas);
    else if(MV=='M')
    {
         sort(M[i].pazymys.begin(),M[i].pazymys.end());
        if(a%2!=0)
            {
                int k=0;
                k = a/2;
                a-= k;
                mediana = M[i].pazymys[a-1];
            }
        else
        {
            int k=0;
            k=a/2;
            mediana = (M[i].pazymys[k-1]+M[i].pazymys[k])/2;
        }
    M[i].galutinis = (0.4*mediana) +(0.6*egzaminas);
    }
    cout << "Ar yra daugiau studentu? Jei taip rasykite 'taip' " << endl;
    string klausimas;
    cin >> klausimas;
    if(klausimas == "taip")
    {
        x++;
        a =0;
        kiekis =0;
    }
    }
    }
    string rikiavimas;
    cout << "Kaip norite surikiuoti sarasa pagal vardus ar pavardes?" << endl;
    while(1)
    {
        cin >> rikiavimas;
        if(rikiavimas=="vardus" || rikiavimas=="pavardes")
        {
            break;
        }
        else {
            cin.clear();
            cin.ignore(500, '\n');
            cout << "KLAIDA. Pasirinkite ar rikiuoti pagal vardus ar pavardes" << endl;
        }

    }
    if(rikiavimas=="vardus")
        Rikiuoti(M,x);
    else Rikiuoti1(M,x);
    cout << "Pavarde";
    cout << setw(14);
    cout << "Vardas" ;
    cout << setw(24);
   if(MV=='M')
   {
       cout << "Galutinis (Med.)" << endl;
       for(int i=0; i <x; i++)
       {
           cout << M[i].pavarde;
           cout << setw(14);
           cout << M[i].vardas;
           cout << setw(20);
           cout << fixed<<setprecision(2) << M[i].galutinis << endl;
       }
   }
   else if (MV=='V')
   {
       cout << "Galutinis(Vid.)" << endl;
       for(int i=0; i <x; i++)
       {
           cout << M[i].pavarde;
           cout << setw(14);
           cout << M[i].vardas;
           cout << setw(20);
           cout << fixed<<setprecision(2) << M[i].galutinis << endl;
       }
   }


}
