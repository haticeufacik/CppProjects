#include <iostream>

using namespace std;

class Time{
public:
    Time();
    void TimeSet(int, int, int);
    void standard();
    void mintime();
private:
    int hour, minute, second;
};

Time::Time(){hour=minute=second=0;}   //constructive funch

void Time::TimeSet(int h, int m, int s){
    hour= (h>=0 && h<24)?h:0;    //hour 0-23
    minute=(m>=0 && m<60)?m:0;   //minute 0-59
    second=(s>=0 && s<60)?s:0;   //second 0-59
}

void Time::standard(){
    cout<<((hour==0 || hour==12)?12:hour%12) // hour 0-11
    <<":"<<(minute<10?"0":"")<< minute
    <<":"<<(second<10?"0":"")<< second
    <<(hour<12?" AM":" PM")<< endl;

}

void Time::mintime(){
    cout<<(hour<10?"0":"")<< hour<< ":"
    <<(minute<10?"0":"")<< minute;
}


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
