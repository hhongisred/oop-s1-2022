#include<iostream>
#include<string>
#include "meerkat.h"

using namespace std;

int main()
{
    meerkat m1,m2,m3,m4;
    m1.setName("m1");
    m1.setAge(24);
    m2.setName("m2");
    m2.setAge(22);
    m3.setName("m3");
    m3.setAge(20);
    m4.setName("m4");
    m4.setAge(25);

    cout<<"1st name:"<<m1.getName()<<",age:"<<m1.getAge()<<endl;
    cout<<"2nd name:"<<m2.getName()<<",age:"<<m2.getAge()<<endl;
    cout<<"3rd name:"<<m3.getName()<<",age:"<<m3.getAge()<<endl;
    cout<<"4th name:"<<m4.getName()<<",age:"<<m4.getAge()<<endl;
}
