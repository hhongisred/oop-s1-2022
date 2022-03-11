#include<iostream>
using namespace std;

extern int diagonal (int array[4][4]);

int main()
{
    int test_array[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    std::cout << diagonal(test_array) <<std :: endl ;
}