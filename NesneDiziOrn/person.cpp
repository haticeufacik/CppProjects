#include <iostream>
#include "person.h"

using namespace std;
Person::Person(){
    Kisigir();
}

void Person::Kisigir(){
string x,y;
int z;
cout<<"Ad giriniz : "<<endl;
cin>>x;

cout<<"Soyad giriniz : "<<endl;
cin>>y;

cout<<"Yaş giriniz : "<<endl;
cin>>z;

cout<<"-------------"<<endl;

isim=x;
soyisim=y;
yas=z;
}

void Person::Kisial(){
cout<<"Ad : "<<isim<<endl;
cout<<"Soyad : "<<soyisim<<endl;
cout<<"Yaş : "<<yas<<endl;
cout<<"**************"<<endl;
}
