#include<string>
#include "person.h"
#ifndef AIRCRAFT_H
#define AIRCRAFT_H
using namespace std;
class aircraft
{
    private:
        std::string callsign;
        person pilot;
        person CoPilot;

    public:
        aircraft(string callsign,person thePilot,person theCoPilot);
        void setPilot(person thePilot);      // change the pilot
        person getPilot();
        void setCoPilot(person theCoPilot);  // change the co-pilot
        person getCoPilot();
        void printDetails();      
        int count = 0;
        std::string pilot[]=new Pilot[3];
}




;
#endif