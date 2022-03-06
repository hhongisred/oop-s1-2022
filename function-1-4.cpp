#include<iostream>
using namespace std;

int sum_two (int array[],int secarray[], int n)
{
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += array[i];
        sum2 += secarray[i];

        if ( n < 1)
        {
        return 0;
        }
    }

    return sum1 + sum2;
}