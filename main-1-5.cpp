#include<iostream>
using namespace std;

extern int count_even(int number);

int main()
{
    int n, res;
    cout << "Enter a number:"; cin >> n;
    res = count_even(n);
    cout<<"Number of even numbers:"<<res;

}