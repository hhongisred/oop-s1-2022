#include<iostream>
using namespace std;

int sumtwo (int array[],int secarray[], int n)
{
    int sum1 = 0;
    int sum2 = 0;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += array[i];
        sum2 += secarray[i];
        total =  sum1 + sum2;

        if ( n < 1)
        {
        return 0;
        }
    }

    return total;
}
