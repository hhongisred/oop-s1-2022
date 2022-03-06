#include<iostream>
using namespace std;

extern bool descending(int array[], int n);

int main()
{
    int test_array[5] = { 1,3,4,5,8 };

    std::cout << descending(test_array, 5) << std::endl;
}