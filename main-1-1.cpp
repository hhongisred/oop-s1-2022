#include<iostream>
#include<string>
#include "Musician.h"

using namespace std;

int main()
{
    Musician m1("piano",3),m2("violin",4),m3("guitar",1);
    cout<<"instrument:"<<m1.get_instrument()<<",experience:"<<m1.get_experience()<<endl;
    cout<<"instrument:"<<m2.get_instrument()<<",experience:"<<m2.get_experience()<<endl;
    cout<<"instrument:"<<m3.get_instrument()<<",experience:"<<m3.get_experience()<<endl;
    
}