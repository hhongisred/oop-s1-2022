#include<iostream>
#include<string>
using namespace std;


extern int binary_to_number(int binary_digits[], int number_of_digits);


int main()
{
    int test_array[16] = { 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1 };
    std::cout << binary_to_number(test_array, 16);
}
