#pragma once
class Date
{
public:
    bool isEarlier(const Date& other) const {}
	Date(int d, int m, int y);

private:
	int day;
	int month;
	int year;


};

