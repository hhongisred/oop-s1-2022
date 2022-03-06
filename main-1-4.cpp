#include<iostream>
using namespace std;

extern int sum_two(int array[],int secarray[], int n);

int main(){
    int test_array[5] = {5,3,4,-1,8};
    int test_array2[6] = {3,4,-1,8,6};

    std::cout << sum_two(test_array,test_array2,5) << std::endl;
}