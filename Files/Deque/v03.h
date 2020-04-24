#ifndef V03_H_INCLUDED
#define V03_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <list>
#include <algorithm>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <chrono>
#include <deque>
#include <random>
#include <chrono>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::deque;
using std::swap;
using std::numeric_limits;
using std::fixed;
using std::setprecision;
using std::setw;
using std::ifstream;
using std::stringstream;
using std::ofstream;
using std::left;
class pazymiai
{
private:
    string vardas, pavarde;
    deque <int> pazymys = {};
    double galutinis;

public:
    pazymiai()
    {
        galutinis = 0;
    }
    void inline SetVardas(string name)
    {
        this->vardas = name;
    }
    void inline SetPavarde(string surname)
    {
        this->pavarde = surname;
    }
    void inline SetPazymys(int mark)
    {
        this->pazymys.push_back(mark);
    }
    void inline SetGalutinis(double Galutinis)
    {
        this->galutinis = Galutinis;
    }
    string inline GetVardas() const
    {
        return vardas;
    }
    string inline GetPavarde() const
    {
        return pavarde;
    }
    int inline GetPazymys(int Narys) const
    {
        return pazymys[Narys];
    }
    double inline GetGalutinis() const
    {
        return galutinis;
    }
    void Sort()
    {
        sort(this->pazymys.begin(), this->pazymys.end());
    }
};
void Gen(int& rekursija, int k, string failas0, int namudarbuskc, std::mt19937& mt);
int countWords(string str);
bool Rik(pazymiai& a, pazymiai& b);
bool Testas(pazymiai& a, pazymiai& b);
void Skirstymas(int x, deque <pazymiai>& M, deque <pazymiai>& N, int& N1, int& B1);
void Spausdintuvas(string ats, string ats1, int N1, char MV, int x, deque <pazymiai>& N, int B1, deque <pazymiai>& M);
void Nuskaitymas(string Gavimas, string dummyline, string line, deque <pazymiai>& M, int& a, char MV, int& x, deque <pazymiai>& N, int& N1, int& B1, string ats, string ats1, int& rekursija2);
bool Rikiavimas(pazymiai& a, pazymiai& b);
bool Rikiavimas1(pazymiai& a, pazymiai& b);
#endif // V03_H_INCLUDED
