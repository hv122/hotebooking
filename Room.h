#ifndef ROOM_H
#define ROOM_H

#include "Guest.h"
#include <memory>

class Room
{

public:
    int max_occupancy;
    int current_occupancy;
    std::shared_ptr<Guest> guest_ptr;

public:
    Room(int size);
    void allocate_guest(Guest guest);

};

#endif