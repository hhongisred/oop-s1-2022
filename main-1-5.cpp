#include<iostream>
using namespace std;

extern void print_summed_matrices(int array1[3][3],int array2[3][3]);

int main()
{
    int test_array1[3][3] = { {1,2,3},{1,2,3},{1,2,3} };
    int test_array2[3][3] = { {2,3,4},{2,3,4},{2,3,4} };
    print_summed_matrices(test_array1,test_array2);
}