#include<iostream>
#include<string>
using namespace std;

void print_as_binary(std::string decimal_number)
{
    int num = stoi(decimal_number);

    string s ="";
    while(num != 0)
    {
        s = ((char)('0'+ num % 2))+ s;
        num = num / 2;
    }
    cout<<s<<endl;

}
