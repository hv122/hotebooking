/*
	What does the room assignment algorithm need to do?

	- Search through the guests, and respectively the dates, of the relevant rooms, comparing to the required dates.
	- Return a true or false so the guest can be turned away or booked in.

    Conditions required to allocate a room:
        - max occupancy and no of guests much match [done]
        - dates stated must not overlap with any of the guests pointed to by the room --> to check each guest, we needed
        to make the ptrs shared
        - return a bool stating whether or not the guest got a room, client can construct guest object

}
*/

#include <vector>
#include <memory>

#include "Date.h"
#include "Room.h"

bool doDatesOverlap(const Date& start1, const Date& end1, const Date& start2, const Date& end2) {
    if (end1.isEarlier(start2)) {
        return false;
    }
    if (end2.isEarlier(start1)) {
        return false;
    }
    return true;
}


bool room_allocation(std::vector<Room> hotel, Guest prospective) {

    for (auto& room : hotel)
    {
        if (room.max_occupancy == prospective.number_of_guests)
        {
            for (int i = 0; i < room.guests.size(); i++) // vector of guests for the room
            {
                Guest tmp = *room.guests[i];

                if (doDatesOverlap(tmp.start_date, tmp.end_date, prospective.start_date, prospective.end_date))
                    return false;
            }
            room.guests.push_back(std::make_shared<Guest>(prospective));
            return true;
        }
    }

    return false;

}



