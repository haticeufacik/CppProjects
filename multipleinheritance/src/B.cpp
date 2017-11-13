#include "B.h"
#include <iostream>

using namespace std;

B::B(int x, int y)  //ctor
{
    c=x;
    d=y;
    cout<<"2. Temel sınıf yapıcısı "<<endl;
}

B::~B()  //dtor
{
    cout<<"2. Temel sınıf yıkıcısı "<<endl;
}

void B::goster_b()
{
    cout<<c<<"\t"<<d<<endl;
}
