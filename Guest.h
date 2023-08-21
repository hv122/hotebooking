#ifndef GUEST_H
#define GUEST_H

#include <string>
#include "Date.h"

class Guest
{

public:
    Guest(std::string fn, std::string ln, std::string pn, int no_guests, Date start, Date end);
    // fn to return bool, having checked for dates available
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    Date start_date;
    Date end_date;
    int number_of_guests;
    std::string card_number;

private:
    float Subtotal();
};

#endif