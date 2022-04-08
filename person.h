#ifndef PERSON_H
#define PERSON_H
#include <string>

class person
{
    private:
        std::string name;
        int salary;
    public:
        person(std::string myName,int Salary);
        void setName(std::string myName);    // change the person's name
        std::string getName();
        void setSalary(int mySalary);     // change the person's salary
        int getSalary();
}; 
    
#endif
