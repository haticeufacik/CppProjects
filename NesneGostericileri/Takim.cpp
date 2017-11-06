#include <iostream>
#include "Takim.h"

using namespace std;

Takim::Takim(string i,string p,int n)
{
isim=i;
pozisyon=p;
no=n;
}

void Takim::Listele(){
cout<<"Oyuncu ismi :"<<isim<<endl;
cout<<"Pozisyon :"<<pozisyon<<endl;
cout<<"No :"<<no<<endl;
cout<<"--------------------"<<endl;
}
