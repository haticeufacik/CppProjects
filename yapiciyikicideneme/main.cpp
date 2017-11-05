#include <iostream>
#include "yarat.h"
using namespace std;

void yarat(void); //prototip
YaratVeYik birinci(1); //global nesne

int main()
{
    cout<<"global mainden önce yaratılmıştır."<<endl;

    YaratVeYik ikinci(2); //yerel nesne
    cout<<"mainde yerel otomatik"<<endl;

    static YaratVeYik ucuncu(3); //yerel nesne
    cout<<"mainde yerel statik"<<endl;

    yarat(); //yeni nesneler yaratmak için otomatik çağrı

    YaratVeYik dorduncu(4); //yerel nesne
    cout<<"mainde yerel otomatik"<<endl;

    return 0;
}

void yarat(void){
    for(int i=5;i<8;i++){
    YaratVeYik nesne(i);
    cout<<"yaratta yerel otomatik"<<endl;
    }
}
