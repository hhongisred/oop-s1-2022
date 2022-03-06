#include<iostream>
using namespace std;

extern int count(int array[], int n, int number);

int main() 
{
int test_array[5] = { 5,3,4,-1,8 };

    std::cout << count(test_array, 5,5) << std::endl;
}