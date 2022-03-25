#include<iostream>
#include<string>
using namespace std;

extern int maximum_sum(int *nums,int length);

int main()
{
    int test_array[10] = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
    maximum_sum(test_array,10);
}