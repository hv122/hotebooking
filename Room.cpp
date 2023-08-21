#include "Room.h"

Room::Room(int size) :

    max_occupancy(size),
    current_occupancy(0),
{
}

void Room::allocate_guest(Guest guest)
{
    guest_ptr = std::make_shared<Guest>(guest);
}
