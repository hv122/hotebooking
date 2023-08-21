/*
	What does the room assignment algorithm need to do?

	- Search through the guests, and respectively the dates, of the relevant rooms, comparing to the required dates.
	- Return a true or false so the guest can be turned away or booked in.

    Conditions required to allocate a room:
        - max occupancy and no of guests much match [done]
        - dates stated must not overlap with any of the guests pointed to by the room --> to check each guest, we needed
        to make the ptrs shared
        - return a bool stating whether or not the guest got a room, client can construct guest object

auto count(0);
for (auto& room : hotel)
{
    if (room.max_occupancy == required_space && room.occupied == false)
    { // assigning guest to a room if available
        room.allocate_guest(Guest(first_name, last_name, phone_number, required_space, start_date, end_date));
        room.occupied = true;
        break;
    }
    count++;

    ^^^^^ code from Client, without date checks
}
*/

#include <vector>
#include <memory>

#include "Date.h"
#include "Room.h"

bool room_allocation(std::vector<Room> hotel, int required_space, Date start, Date end) {
    
    for (auto& room : hotel)
    {
        if (room.max_occupancy == required_space)
        {
            Guest tmp = std::make_shared(NULL);


        }

}



