#ifndef TİME_H
#define TİME_H
class Time{
public:
    Time();
    void TimeSet(int, int, int);
    void standard();
    void mintime();
private:
    int hour, minute, second;
};

#endif
