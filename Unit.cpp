#include "Unit.h"
#include<string>

Unit::Unit()
{
    bedroom = 0;
    value = 0;
    area = 0;
};

Unit::Unit(int beds, double square, int price)
{
    bedroom = beds;
    area = square;
    value = price;
}; // a constructor that takes: the number of bedrooms,
 //number of square meters, and value in dollars as parameters

int Unit::get_bedrooms()
{
    return bedroom;
};  // returns the number of bedrooms for the unit
int Unit::get_value()
{
    return value;
};    // returns the value in dollars of the Unit
double Unit::get_area()
{
    return area;
};  