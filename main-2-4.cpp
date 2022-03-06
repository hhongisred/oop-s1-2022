#include<iostream>
using namespace std;

extern bool ascending(int array[], int n);

int main()
{
    int test_array[5] = { 9,3,4,5,8 };

    std::cout << ascending(test_array, 5) << std::endl;
}
