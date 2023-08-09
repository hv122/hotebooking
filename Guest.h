#ifndef GUEST_H
#define GUEST_H

#include <string>

class Guest
{

public:
    Guest(std::string fn, std::string ln, std::string pn, int nguests);
    Guest();

private:
    std::string card_number;
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    int duration;
    int number_of_guests;
};

#endif