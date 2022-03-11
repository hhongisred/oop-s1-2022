#include<iostream>
using namespace std;

extern void count_numbers(int array[4][4]);

int main()
{
    int test_array[4][4] = { {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4} };
    count_numbers(test_array);
}