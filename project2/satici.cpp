#include <iostream>
#include <iomanip> //setprecision() fonk için ekledik.
#include "satici.h"
using namespace std;

Satici::Satici()    //yapici fonksiyonunda saticilari setledik
{
    for(int i=0;i<12;i++)
        satislar[i]=0.0;
}

void Satici::kullanicidanSatislariOKu()  //girdileri alan fonk.
{
    double satisBilgisi;
    for(int i=1;i<=12;i++){
    cout<<i<<". ay için satış miktarını giriniz : ";
    cin>> satisBilgisi;
    satislariAyarla(i,satisBilgisi);
    }
}

void Satici::satislariAyarla(int ay,double miktar)
{
    if(ay>=1&&ay<=12&&miktar>0)
        satislar[ay-1]=miktar; // dizi indisleri 0-11 olması için
    else
        cout<<"geçersiz ay ya da satış bilgisi!"<<endl;
}

void Satici::yillikSatislariYaz()
{
    cout<<setprecision(2)  //ondalik hassasiyet .00
        <<setiosflags(ios::fixed | ios::showpoint)
        <<"\n Toplam yıllık satışlar: $"
        <<toplamYillikSatislar()<<endl;
}
// yillikSatislariYaz fonk için oluşturulan hizmet fonk.
double Satici::toplamYillikSatislar()
{
    double toplam=0.0;
    for(int i=0;i<12;i++)
    toplam +=satislar[i];

    return toplam;
}
