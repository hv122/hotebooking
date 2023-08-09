#include "Guest.h"

Guest::Guest(std::string fn, std::string ln, std::string pn, int no_guests) :

    card_number(""),
    first_name(fn),
    last_name(ln),
    phone_number(pn),
    number_of_guests(no_guests)
{
}