#include"Unit.h"
#include"Apartment.h"
#include<string>
#include <iostream>
using namespace std;


Apartment::Apartment()
{
    cap = 10;
    ap_num = 0;
    ap_arr = nullptr;
};  // default constructor allocates capacity for 10 units

Apartment::Apartment(int capacity)
{
    Apartment::cap = capacity;
    Apartment::ap_num = 0;
    ap_arr = new Unit [capacity];

};  // constructor for Apartment with given num units
int Apartment::get_capacity()
{
    return ap_num;
};  // returns the  number of units allowed

// returns the current number of units in the apartment
int Apartment::get_current_number_of_units()
{
    return ap_num;
}; 

// returns a dynamic array of the units in the apartment
Unit* Apartment:: get_contents()
{
    return ap_arr;
};

// returns true and adds unit to the condo if there is sufficient space
// otherwise returns false
bool Apartment::add_unit(Unit unit)
{
    if(ap_num = cap)
    {
        cout<<"The apartments are full!"<<endl;
        return false;
    }
    if(ap_num<0)
    {
        cout<<"Invalid number!"<<endl;
        return false;
    }
    else if(ap_num<cap)
    {
        cout<<"Add apartment successfullt!"<<endl;
        ap_arr[ap_num] = unit;
        return true;
    }
};

// destructor
Apartment::~Apartment(){

};