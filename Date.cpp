#include "Date.h"


Date::Date(int d, int m, int y) :
	day(d),
	month(m),
	year(y)
{
}


bool Date::isEarlier(const Date& other) const {
    if (year < other.year) return true;
    if (year > other.year) return false;
    if (month < other.month) return true;
    if (month > other.month) return false;
    return day < other.day;
}

