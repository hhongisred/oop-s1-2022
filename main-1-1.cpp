#include<iostream>
#include<string>
#include<fstream>
using namespace std;

extern int *readNumbers() ;
void printNumbers(int *numbers,int length);

int main()
{
    printNumbers(readNumbers(),10);
    return 0;
}