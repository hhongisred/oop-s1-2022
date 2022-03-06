#include<iostream>
using namespace std;


double avg_array (int array[], int n)
{
    int sum = 0 ;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];

        if ( n < 1)
        {
        return 0;
        }
    }

    return sum/n;
}