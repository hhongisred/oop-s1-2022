#include<iostream>
using namespace std;

int maximum(int array[], int n)
{
    int max = 0 ;

    if ( n < 1)
    {
        return 0;
    }
    
    for(int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array [i];
        }

    }
    return max;
}