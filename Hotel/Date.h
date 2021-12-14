#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

class Date
{
public:
    Date(int day, int month, int year);
    int month() const;
    int day() const;
    int year() const;

private:

    int _month;
    int _day;
    int _year;
};

std::string toString(Date d);


#endif

