#include<iostream>
using namespace std;

int minimum(int array[], int n)
{
    int min = 0 ;

    if ( n < 1)
    {
        return 0;
    }
    
    for(int i = 0; i < n; i++)
    {
        if (min > array[i])
        {
            min = array [i];
        }

    }
    return min;
}