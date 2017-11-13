#ifndef A_H
#define A_H
#include <iostream>

using namespace std;


class A
{
    public:
        A(int, int);
        virtual ~A();
        void goster_a();
    private:
        int a,b;
};

#endif // A_H
