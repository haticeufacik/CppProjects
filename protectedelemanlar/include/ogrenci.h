#ifndef OGRENCI_H
#define OGRENCI_H
#include "Okul.h"
#include <string>

using namespace std;

class Ogrenci: public Okul
{
    private:
    string soyad;
    int numara;

    public:
        Ogrenci();
        Ogrenci(string, string, int);
        void goster();
        virtual ~Ogrenci();

};

#endif // OGRENCI_H
