#include "DayTime.h"
#include <ctime> // Functions time(), localtime()
using namespace std;

const DayTime & DayTime::currentTime() {
    static DayTime curTime;
    time_t sec;
    time(&sec); // Gets the present time.
    // Initializes the struct
    struct tm *time = localtime(&sec); // tm with it.
    curTime.setTime( time->tm_hour, time->tm_min,
    time->tm_sec );
    return curTime;
}
