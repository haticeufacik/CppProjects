#ifndef C_H
#define C_H
#include "A.h"
#include "B.h"

class C:public A, public B
{
    public:
        C(int, int);
        void goster_c();
        virtual ~C();
    private:
    int e,f;
};

#endif // C_H
