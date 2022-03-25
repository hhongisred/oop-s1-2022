#include<iostream>
#include<string>
using namespace std;

extern void print_sevens(int *nums,int length);

int main()
{
    int test_array[5] = {7,13,28,59,81};
    print_sevens(test_array,5);
}