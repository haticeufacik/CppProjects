#include <iostream>
#include "Time.h"
using namespace std;


int main()
{
    Time t;  // t is object of Time class
    cout<<"the first mintime value of time : " ;
    t.mintime();
    cout<<"\n\n the first standard value of time : " ;
    t.standard();

    t.TimeSet(15,42,59);
    cout<<"\n\n the first mintime value of time after than TimeSet function : " ;
    t.mintime();
    cout<<"\n\n the first standard value of time after than TimeSet function : " ;
    t.standard();


    t.TimeSet(25,59,61);
    cout<<"\n\nthe invalid value : " ;
    t.mintime();
    cout<<"\n\n the invalid value  : " ;
    t.standard();

    return 0;
}
