// result2.h
// The class Result with a constant data member.
// ---------------------------------------------------
#ifndef _RESULT_
#define _RESULT_
#include "DayTime.h" // Class DayTime

class Result
{
private:
    double val;
    const DayTime time;
    static bool hamsi;
public:
    Result(double w, const DayTime& z = currentTime());
    Result(double w, int hr, int min, int sec);
    double getVal() const { return val; }
    void setVal( double w ) { val = w; }
    const DayTime& getTime() const { return time; }
    void print() const;
};
#endif // _RESULT_