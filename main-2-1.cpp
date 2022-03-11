#include<iostream>
#include<string>
using namespace std;


extern void print_as_binary(std::string decimal_number);

int main()
{
    print_as_binary("23");
    return 0;
}