#ifndef OKUL_H
#define OKUL_H
#include <string>
using namespace  std;

class Okul
{
    protected:
        string ad;
    public:
        Okul();
        Okul(string );
        string ad_dondur();
        virtual ~Okul();
};

#endif // OKUL_H
