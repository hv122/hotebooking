#ifndef GUEST_H
#define GUEST_H

#include <string>
#include "Date.h"

class Guest
{

public:
    Guest(std::string fn, std::string ln, std::string pn, int no_guests, Date start, Date end);
    // fn to return bool, having checked for dates available

private:
    Date start_date;
    Date end_date;
    std::string card_number;
    float Subtotal();
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    int number_of_guests;
};

#endif