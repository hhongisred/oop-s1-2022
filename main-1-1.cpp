#include "Unit.h"
#include <string>
#include<iostream>

using namespace std;

int main()
{
    Unit u1(2,1500,70),u2(1,900,50),u3(3,2100,97);
    cout<<"bedroom number:"<<u1.get_bedrooms()<<" price:"<<u1.get_value()<<" area:"<<u1.get_area()<<endl;
    cout<<"bedroom number:"<<u2.get_bedrooms()<<" price:"<<u2.get_value()<<" area:"<<u2.get_area()<<endl;
    cout<<"bedroom number:"<<u3.get_bedrooms()<<" price:"<<u3.get_value()<<" area:"<<u3.get_area()<<endl;
    

}