#include <iostream>
using namespace std;

extern int size_of_variable_star_t() ;

int main()
{
    int arr [3] = {1,2,3};
    std::cout << size_of_variable_star_t(arr) << std::endl;
   
}
    