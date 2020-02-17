#include <bits/stdc++.h>
#include<limits>
using namespace std;
struct pazymiai
{
    string vardas, pavarde;
    double pazymys;
    char MV;
    double galutinis;
    pazymiai()
    {
        galutinis =0;
    }

};
void Rikiuoti(pazymiai M[],int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
           if (M[i].pazymys > M[j].pazymys)
              swap(M[i], M[j]);
}
int main()
{
    pazymiai M[100];
    int x=1;
    srand(time(NULL));
    for(int i=0; i < x; i++)
    {
    cout <<"Iveskite studento varda" << endl;
    cin >> M[i].vardas;
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "KLAIDA. Iveskite tinkama skaiciu " << endl;
        }
        else
        {
            if(!cin.fail() && skc <=10 && skc >=1 && skc==(int)skc)
        {
            M[a].pazymys = skc;
            cout << " cia " << M[a].pazymys << endl;
            a++;
            kiekis+=skc;
        }
            else if(skc!=(int)skc)cout << "KLAIDA. Iveskite naturalujy skaiciu" << endl;
        }
           if(cin.fail() || skc == 0)
           {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "KLAIDA. skaicius negalimas ";
            }
        }
        for(int i=0; i < n; i++)
        {
            a++;
            M[i].pazymys = rand()%10+1;
            cout << M[i].pazymys << endl;
            kiekis+=M[i].pazymys;
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
            if(!cin.fail() && egzaminas<10 && egzaminas==(int)egzaminas && egzaminas>0 && egzaminas==(int)egzaminas  )
            {
               break;
            }
            else
            {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "KLAIDA. Iveskite tinkama egzamino rezultata desimtbaleje sistemoje " <<endl;
            }
        }

    }
    else
    {
        egzaminas=rand()%10+1;
    }
    cout << "Jei galutini bala norite skauciuoti su mediana spauskite M, jei vidurkiu V " << endl;
    while(1)
    {
        cin >> M[i].MV;
        if(M[i].MV=='M' || M[i].MV=='V')
        {
            break;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "KLAIDA. Iveskite tinkama raide ";
        }

    }
    if(M[i].MV=='V')
    M[i].galutinis = 0.4*(kiekis/a)+ (0.6*egzaminas);
    else
    {
        Rikiuoti(M,a);
        if(a%2!=0)
            {
                int k=0;
                k = a/2;
                a-= k;
                mediana = M[a-1].pazymys;
            }
        else
        {
            int k=0;
            k=a/2;
            mediana = (M[k-1].pazymys+M[k].pazymys)/2;
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
    cout.width(15);
    cout << "Pavarde";
    cout.width(15);
    cout << "Vardas" ;
    cout.width(15);
    cout<< "Galutinis(Vid.) / Galutinis (Med.)" << endl;
    for(int i=0; i < x; i ++)
    {
        if(M[i].MV=='V'){
        cout.width(5);
        cout << M[i].pavarde;
        cout.width(15);
        cout << M[i].vardas;
        cout.width(15);
        cout <<  fixed<<setprecision(2) << M[i].galutinis << endl;
        }
        else {
            cout.width(15);
            cout << M[i].pavarde;
            cout.width(15);
            cout<< M[i].vardas;
            cout.width(15);
            cout<<  fixed<<setprecision(2) << M[i].galutinis << endl;

        }


    }

}
