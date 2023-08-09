#include <iostream>
#include <vector>

#include "Guest.h"
#include "Room.h"

int main()
{

    std::vector<Room> hotel;

    // ----------------- ADDING ROOMS ------------------------

    hotel.push_back(Room(2));
    hotel.push_back(Room(3));
    hotel.push_back(Room(4)); // set up three rooms in the hotel

    // ------------------ DATA COLLECTION ---------------------

    std::string first_name;
    std::string last_name;
    std::string phone_number;
    auto required_space(0);

    std::cout << "Enter the lead guest's first name: ";
    std::cin >> first_name;

    std::cout << "Enter the lead guest's second name: ";
    std::cin >> last_name;

    std::cout << "Enter the lead guest's phone number: ";
    std::cin >> phone_number;

    std::cout << "How many guests including yourself will be staying? ";
    std::cin >> required_space;

    // ------------------ DATA COLLECTION ---------------------

    auto count(0);
    for (auto& room : hotel)
    {
        if (room.max_occupancy == required_space + room.occupied == false)
        { // assigning guest to a room if available
            room.allocate_guest(Guest(first_name, last_name, phone_number, required_space));
            room.occupied = true;
            break;
        }
        count++;
    }

    if (count == hotel.size())
    {
        std::cout << "Sorry, there are no rooms to match your requirements at the moment.\n";
    }
    else
    {
        std::cout << "There is a room booked under the name " << first_name << " " << last_name
            << " for " << required_space << " guests.\n";
    }
}