#include "Room.h"

Room::Room(int size) :

    occupied(false),
    max_occupancy(size),
    current_occupancy(0)
{
}

void Room::allocate_guest(Guest guest)
{
    auto guest_ptr = std::make_unique<Guest>(guest);
}
