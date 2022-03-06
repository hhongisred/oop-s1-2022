#include<iostream>
using namespace std;

extern double avg_array(int array[],int n);

double main() {
    int test_array[5] = { 5,3,4,-1,8 };

    std::cout << avg_array(test_array, 5) << std::endl;
}