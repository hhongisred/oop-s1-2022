#include<iostream>
using namespace std;

extern void print_scaled_matrix(int array[3][3], int scale);


int main()
{
    int test_array[3][3] = { {1,2,3},{1,2,3},{1,2,3} };
    print_scaled_matrix(test_array,5);
}
