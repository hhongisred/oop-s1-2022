#include<iostream>
using namespace std;

int size_of_variable_star_t() 
{
    int a, *p;
    p = &a;

    int *t = new int;

    delete [] t;
    return sizeof(t);
}