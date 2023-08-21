#include <iostream>
#include <vector>
#include <iomanip>

#include "Room.h"
#include "Guest.h"
#include "OverlapAlgorithm.cpp"

int main()
{

    std::vector<Room> hotel;

    // ----------------- ADDING ROOMS ------------------------

    hotel.push_back(Room(2));
    hotel.push_back(Room(3));
    hotel.push_back(Room(4)); // set up three rooms in the hotel

    // ----------------- ADDING ROOMS ------------------------

    // ------------------ DATA COLLECTION & VALIDATION ---------------------

    std::string first_name, last_name, phone_number;
    int in_day, in_month, in_year, out_day, out_month, out_year;
    auto required_space(0);

    std::cout << "Enter the lead guest's first name: ";
    std::cin >> first_name;

    std::cout << "Enter the lead guest's second name: ";
    std::cin >> last_name;

    std::cout << "Enter the lead guest's phone number: ";
    std::cin >> phone_number;

    std::cout << "How many guests including yourself will be staying? ";
    std::cin >> required_space;

    std::cout << "Enter the check in date separated by spaces: ";
    std::cin >> in_day >> in_month >> in_year;

    std::cout << "Enter the check out date separated by spaces: ";
    std::cin >> out_day >> out_month >> out_year;

    Date start_date(in_day, in_month, in_year); // constructed dates for start and end
    Date end_date(out_day, out_month, out_year);

    Guest prospective(first_name, last_name, phone_number, required_space, start_date, end_date);

    // ------------------ DATA COLLECTION & VALIDATION ---------------------
    

    // ------------------ FEEDBACK TO USER & ALLOCATION ---------------------

    if (room_allocation(hotel, prospective))
    {
        std::cout << "There is a room booked under the name " << prospective.first_name << " " << prospective.last_name
            << " for " << prospective.number_of_guests << " guests.\n";

    }
    else
    {
        std::cout << "Sorry, there are no rooms to match your requirements at the moment.\n";
    }

    // ------------------ FEEDBACK TO USER ---------------------
}