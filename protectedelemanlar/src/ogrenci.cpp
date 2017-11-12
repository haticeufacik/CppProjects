#include <iostream>
#include "ogrenci.h"
#include "Okul.h"
#include <string>

using namespace std;

Ogrenci::Ogrenci()
{
    //ctor
}
Ogrenci::Ogrenci(string a, string s, int n)
{
    ad=a;
    soyad=s;
    numara=n;
}

void Ogrenci::goster()
{
    cout<<"Ad: "<< ad<<endl;
    cout<<"Soyad: "<<soyad<<endl;
    cout<<"Numara: "<<numara<<endl;
    cout<<"---------------- "<<endl;
}

Ogrenci::~Ogrenci()
{
    //dtor
}
