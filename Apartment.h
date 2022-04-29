#ifndef APARTMENT
#define APARTMENT
#include "Unit.h"
#include<string>

class Apartment
{
private:
    int cap;
    int ap_num;
    Unit* ap_arr;

public:
    Apartment();  // default constructor allocates capacity for 10 units
    Apartment(int cap);  // constructor for Apartment with given num units
    int get_capacity();  // returns the  number of units allowed

// returns the current number of units in the apartment
    int get_current_number_of_units(); 

// returns a dynamic array of the units in the apartment
    Unit * get_contents();

// returns true and adds unit to the condo if there is sufficient space
// otherwise returns false
    bool add_unit(Unit unit);

// destructor
    ~Apartment();
};
#endif