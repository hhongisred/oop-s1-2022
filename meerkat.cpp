#include<iostream>
#include<string>
#include "meerkat.h"
using namespace std;

meerkat::meerkat()
{}
string meerkat::getName()
{   
    return name;
}
void meerkat::setName(string meerName)
{
    name = meerName;
}   // change the meerkat's name

void meerkat::setAge(int meerAge)
{
    age = meerAge;
}        // change the meerkat's age
int meerkat::getAge()
{   
    return age;
}
// no name or age is required to create a meerkat
meerkat::~meerkat()
{}