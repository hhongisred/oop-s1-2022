#include"Apartment.h"
#include"Unit.h"
#include<iostream>
using namespace std;

int main()
{
    Apartment a(3);
    Unit a1(1,30,600);
    Unit a2(2,60,900);
    Unit a3(3,90,1400);

    a.add_unit(a1);
    a.add_unit(a2);
    a.add_unit(a3);

    cout<<a.get_current_number_of_units()<<endl;

    cout<<a.get_contents()<<endl;
    cout<<a.get_capacity()<<endl;


}