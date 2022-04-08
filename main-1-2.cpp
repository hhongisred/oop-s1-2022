#include<iostream>
#include<string>
#include "person.h"
using namespace std;

int main()
{
    person p1("A",7000),p2("B",5800),p3("C",6900),p4("D",4700);
    cout<<"name:"<<p1.getName()<<",salary:"<<p1.getSalary()<<endl;
    cout<<"name:"<<p2.getName()<<",salary:"<<p2.getSalary()<<endl;
    cout<<"name:"<<p3.getName()<<",salary:"<<p3.getSalary()<<endl;
    cout<<"name:"<<p4.getName()<<",salary:"<<p4.getSalary()<<endl;
}