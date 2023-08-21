#ifndef ROOM_H
#define ROOM_H

#include "Guest.h"
#include <memory>
#include <vector>

class Room
{

public:
    int max_occupancy;
    int current_occupancy;
    std::vector<std::shared_ptr<Guest>> guests;

public:
    Room(int size);
    void allocate_guest(Guest guest);

};

#endif