#include<iostream>
#include<string>
using namespace std;

extern void cpyia(int old_array[],int new_array[],int length) ;

int main() 
{
    int a[5]={1,2,3,4,5};
    int b[5];
    cpyia(a, b, 5);
}