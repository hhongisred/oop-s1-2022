#include<iostream>
using namespace std;

int size_of_variable_star_arr()
{
    int *arr = new int;
    for(int i = 0; i < 4; i++)
    {
       cout << arr[i] << " ";
    }
    return 0;
}