#include<iostream>
using namespace std;
extern int sum_array(int array[],int n);

int main(){
    int test_array[5] = {5,3,4,-1,8};

    std::cout << sum_array(test_array, 5) << std::endl;
}