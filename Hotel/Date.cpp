#include "Date.h"
#include <assert.h>

Date::Date(int day, int month, int year) : _day(day), _month(month), _year(year)
{

}

int Date::month() const {
	return _month;
}

int Date::day() const {
	return _day;
}

int Date::year() const
{
	return _year;
}


/**
 *
 * Helper functions
 *
*/


std::string toString(Date d)
{
	return std::to_string(d.day()) + "/" + std::to_string(d.month()) + "/" + std::to_string(d.year());
}
