#include<iostream>
using namespace std;

int count(int array[], int n, int number)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] = number)
        {
            count ++;
            return count;
        }

    }

    if ( n < 1)
        {
        return 0;
        }
    return number;
}