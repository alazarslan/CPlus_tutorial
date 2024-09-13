//
// Created by alaz on 09.08.2024.
//

#ifndef DATE_H
#define DATE_H



class Date {
private:
    int month;
    int year;
    int day;
public:
    void init(int m, int d, int y);
    void init(void);
    void print(void);
};



#endif //DATE_H
