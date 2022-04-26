#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>


class Musician
{
    int m_experience;
    std::string m_instrument;
public:
    Musician();
    Musician(std::string instrument, int experience);      
    std::string get_instrument();    
    int get_experience();
};    
#endif              
