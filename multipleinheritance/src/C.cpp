#include "C.h"
#include "A.h"
#include "B.h"
#include <iostream>

using namespace std;


C::C(int z, int t): A(z,t), B(z,t) //ctor
{
 e=z;
 f=t;
 cout<<"Türetilmiş sınıf yapıcısı "<<endl;
}

C::~C() //dtor
{
 cout<<"Türetilmiş sınıf yıkıcısı "<<endl;

}

void C::goster_c(){

cout<<e<<"\t"<<f<<endl;

}
