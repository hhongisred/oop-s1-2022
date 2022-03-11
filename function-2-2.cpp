#include<iostream>
#include<string>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits)
{
    std::string bi_str;
    int output = 0;
    int power= 1;
    
    for(int i = 0;i<number_of_digits;i++)
    {
        output += binary_digits[(number_of_digits-1)-i] * power;
        power *= 2;
    
    }
    return output;
}