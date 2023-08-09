#ifndef ROOM_H
#define ROOM_H

#include "Guest.h"
#include <memory>

class Room
{

public:
    Room(int size);
    bool occupied; // false is vacant, true is occupied
    int max_occupancy;
    int current_occupancy;
    void allocate_guest(Guest guest);
};

#endif