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
#include <vector>
#include <random>
#include <chrono>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::list;
using std::swap;
using std::numeric_limits;
using std::fixed;
using std::setprecision;
using std::setw;
using std::ifstream;
using std::stringstream;
using std::ofstream;
using std::left;
using std::vector;
using std::list;

class Zmogus
{
protected:
    string vardas, pavarde;

public:
    void virtual inline SetVardas(string name)
    {
        this->vardas = name;
    }
    void virtual inline SetPavarde(string surname)
    {
        this->pavarde = surname;
    }
    string virtual inline GetVardas() const
    {
        return vardas;
    }
    string virtual inline GetPavarde() const
    {
        return pavarde;
    }
};

class pazymiai : public Zmogus
{
private:
    vector <int> pazymys = {};
    double galutinis;

public:
    pazymiai()
    {
        galutinis = 0;
    }
    void inline SetPazymys(int mark)
    {
        this->pazymys.push_back(mark);
    }
    void inline SetGalutinis(double Galutinis)
    {
        this->galutinis = Galutinis;
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
    pazymiai& operator = (const pazymiai& Lygybe);
};
ofstream& operator << (ofstream& Ats, const pazymiai& i);

void Gen(int& rekursija, int k, string failas0, int namudarbuskc, std::mt19937& mt);
int countWords(string str);
bool Rik(pazymiai& a, pazymiai& b);
bool Testas(pazymiai& a, pazymiai& b);
void Skirstymas(int x, list <pazymiai>& M, list <pazymiai>& N, int& N1, int& B1);
void Spausdintuvas(string ats, string ats1, int N1, char MV, int x, list <pazymiai>& N, int B1, list <pazymiai>& M);
void Nuskaitymas(string Gavimas, string dummyline, string line, list <pazymiai>& M, int& a, char MV, int& x, list <pazymiai>& N, int& N1, int& B1, string ats, string ats1, int& rekursija2);
bool Vardas(pazymiai& a, pazymiai& b);
bool Pavarde(pazymiai& a, pazymiai& b);
#endif // V03_H_INCLUDED
#pragma once
