#include "A.h"
#include <iostream>

using namespace std;

A::A(int x, int y)  //ctor
{
    a=x;
    b=y;
    cout<<"1. Temel sınıf yapıcısı "<<endl;
}

A::~A()  //dtor
{
    cout<<"1. Temel sınıf yıkıcısı "<<endl;

}

void A::goster_a()
{
    cout<<a<<"\t"<<b<<endl;

}
