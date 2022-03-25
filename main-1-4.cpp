#include<iostream>
#include<string>
using namespace std;

extern void cpyda(double *old_array,double *new_array,int length);

int main() 
{
    double a[5]={1,2,3,4,5};
    double b[5];
    cpyda(a, b, 5);
}