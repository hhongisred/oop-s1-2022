#include<iostream>
#include<string>
#include "person.h"
#include"aircraft.h"
using namespace std;

aircraft::aircraft(string callsign,person thePilot,person theCoPilot)
{};

void aircraft::setPilot(person thePilot)
{
    pilot = thePilot;
}      // change the pilot
person aircraft()
{
    return pilot;
}
void aircraft::setCoPilot(person theCoPilot)
{
    CoPilot = theCoPilot
}  // change the co-pilot
person getCoPilot()
{
    return CoPilot;
}
void aircraft::printDetails()
{
    cout<<callsign<<endl;
}