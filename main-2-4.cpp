#include<iostream>
#include<string>
using namespace std;

extern int sum_min_and_max(int integers[], int length);
int main()
{

    int integers[] = { 1, 2, 313, 11, 44};

    cout << sum_min_and_max(integers, 5);
    return 0;
}
