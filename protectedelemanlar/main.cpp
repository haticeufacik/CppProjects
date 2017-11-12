#include <iostream>
#include "Okul.h"
#include "ogrenci.h"
using namespace std;

int main()
{
    Okul KTU("Karadeniz Teknik Üniversitesi");
    Ogrenci ogr1("Hatice", "Ufacık", 1), ogr2("Aaa","Bbbb",2),
    ogr3("Ccc","Ddd",3);

    // cout << KTU.ad << endl; HATA nesneler protected üyelere direk erişemez

    // cout << ogr1.ad<< ogr1.soyad<< ogr1.numara << endl; HATA türetilmiş classta
    // fonksiyonlar ana sınıfın protected üyelerine erişebilir fakat nesneleri direk erişemez!

    ogr1.goster();
    ogr2.goster();
    ogr3.goster();

    cout<<KTU.ad_dondur()<<endl;

    return 0;
}
