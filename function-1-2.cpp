#include<iostream>
using namespace std;


double average(int array[], int n)
{
    double avg = 0;
    double total = 0;
    for (int i = 0; i<n; i++)
    {
        total+=array[i];
        avg = total/n;
    }

    return avg;
}