#ifndef SATICI_H
#define SATICI_H

class Satici{
public:
    Satici();
    void kullanicidanSatislariOKu();
    void satislariAyarla(int,double);
    void yillikSatislariYaz();
private:
    double toplamYillikSatislar(); //yardımcı fonk.
    double satislar[12];
};

#endif
