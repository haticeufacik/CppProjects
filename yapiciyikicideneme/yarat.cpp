#include <iostream>
#include "yarat.h"

using namespace std;


YaratVeYik::YaratVeYik(int deger)
{
    veri=deger;
    cout<<"nesne "<<veri<<" yapıcısı ";
}

YaratVeYik::~YaratVeYik()
{cout<<"nesne "<<veri<<" yıkıcısı "<<endl;}
