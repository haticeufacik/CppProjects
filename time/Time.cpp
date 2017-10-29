#include <iostream>
#include "Time.h"
using namespace std;

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
