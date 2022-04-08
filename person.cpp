#include<iostream>
#include<string>
#include "person.h"
using namespace std;

person::person(string myName, int Salary)
{
    name = myName;
    salary = Salary;
}

void person::setName(string myName)
{
    name = myName;
}    // change the person's name

string person::getName()
{
    return name;
}

void person::setSalary(int mySalary)
{
    salary = mySalary;
}     // change the person's salary
int person::getSalary()
{
    return salary;
}

