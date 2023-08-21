# An overview:

This project serves to implement my knowledge of data structures, smart pointers and OOP. 
The overall idea is to create a hotel booking system, in which the data of guests can be entered, stored, 
and the guests be allocated a room that fits their requirements if available, 
or else turned away, as a start. [ This is now achieved ] 

Ideally this would progress and functionality to book dates in advance would be added.

## OOP Elements

- Room (object)
    - state (bool) [done]
    - ptr to guest staying there (when pointer is assigned, guest gets access to the room) [done]
    - rooms are contained in an vector, as they are limited in number [done]
    - would like a quick way to check vacant rooms [done]
    - number of guests [done]
    - size of room [done]

- Guest (object)
    - credit card no [done] (credit card validation) 
    - name, phone number [done]
    - dates of the stay
    - no of guests on the booking [done]

- Dates stored with Guest, so that price for stay can be calculated in that object also.
- Rooms point to Guests, so when assigning a pointer to the Guest, we first search the room's pointers to check whether said dates are available
- If the room is available on those dates, we can assign the pointer as usual, else we iterate through the vector of rooms.

## Functionality

- Assign a guest to a vacant room, for all days of their stay (search 
        for vacancies for dates provided)
- Check credit card validity (Luhn's Algorithm, which I have already
        developed)
- Function to add more rooms to the system
- Could find an api to send a confirmation message to the guest once their details are input

## Issues
- need to consider the best data structure to store the dates said rooms are occupied, early ideas include trees or linked lists
- could use a pointer to a vector?
- needs some more time thinking about it
- make sure we don't have guests staying in the same room, even if max occupancy isn't reached
- could we use maps, vectors, arrays or deques?

## Development Notes
- We can instantiate a Guest object AFTER checking whether a room is available, so as to save on memory allocations
- To achieve this, we moved all the collection of data into the client.cpp file, whilst adding all the member functions
    to the constructor for the guest class. [done]
- It also makes sense to collect the credit card number, after confirming there is space 
- Made Room a constructor - this will need a destructor as nothing will point to it, as of now
- Guest doesn't have a destructor - not necessary due to unique pointer ownership?