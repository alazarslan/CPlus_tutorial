// DayTime.h
// The class DayTime containing operators < and ++ .
// ---------------------------------------------------
#ifndef _DAYTIME_
#define _DAYTIME_
#include <iostream>
using namespace std;
class DayTime
{
private:
    short hour, minute, second;
    bool overflow;
public:
    DayTime( int h = 0, int m = 0, int s = 0);
    bool setTime(int hour, int minute, int second = 0);
    int getHour()
    const { return hour;
    }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }
    int asSeconds() const
    // Daytime in seconds
    { return (60*60*hour + 60*minute + second); }
    bool operator<( const DayTime& t) const // compare
    {
        // *this and t
        return asSeconds() < t.asSeconds();
    }
    DayTime& operator++()
    // Increment seconds
    {
        ++second;
        // and handle overflow.
        return *this;
    }

    DayTime& operator++(int) {
        DayTime temp(*this);
        ++second;
        return temp;
    }


    void print() const;
};

inline bool operator< (const DayTime& lhs, const DayTime& rhs) {
    return lhs.asSeconds() < rhs.asSeconds();
}

inline bool operator> (const DayTime& lhs, const DayTime& rhs) {
    return lhs.asSeconds() > rhs.asSeconds();
}

inline bool operator <= (const DayTime& lhs, const DayTime& rhs) {
    return lhs.asSeconds() <= rhs.asSeconds();
}

inline bool operator >= (const DayTime& lhs, const DayTime& rhs) {
    return lhs.asSeconds() >= rhs.asSeconds();
}

inline bool operator == (const DayTime& lhs, const DayTime& rhs) {
    return lhs.asSeconds() == rhs.asSeconds();
}

inline bool operator != (const DayTime& lhs, const DayTime& rhs) {
    return !(lhs == rhs);
}

inline ostream& operator<< (ostream& os, const DayTime& t) {
    os << t.getHour() << "." << t.getMinute() << "." << t.getSecond();
    return os;
}

inline istream& operator>> (istream& is, DayTime& t) {
    cout << "Enter the time in Hour, Minute, Second format." << endl;
    int h, m, s;
    is >> h >> m >> s;
    t = DayTime(h, m, s);
    return is;
}

#endif
// _DAYTIME_