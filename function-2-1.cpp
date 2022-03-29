#include<iostream>
#include<string>
using namespace std;

int *readNumbers() 
{
    int *arr = new int[10];
    for(int i=0;i<10;i++)
    {

        cin >> arr[i];
    }
    return arr;
}

void printNumbers(int *numbers,int length)
{


    for(int i=0;i<length;i++)
    {
        cout<< i << numbers[i] <<endl;
    }
   
}
void hexDigits(int *numbers,int length)
{
    for(int i=0;i<16;i++)
    {
        
        if(numbers[i]== 10)
        {
            cout<< i<<" "<<numbers[i]<<" "<< "A"<<endl;
        }
        else if(numbers[i]== 11)
        {
            cout<< i<<" "<<numbers[i]<<" "<<"B"<<endl;
        }
        else if(numbers[i]== 12)
        {
            cout<< i <<" "<<numbers[i]<< " "<<"C"<<endl;
        }
        else if(numbers[i]== 13)
        {
            cout<< i <<" "<<numbers[i]<<" "<< "D"<<endl;
        }
        else if(numbers[i]== 14)
        {
            cout<< i<<" " <<numbers[i]<<" "<< "E"<<endl;
        }
        else if(numbers[i]== 15)
        {
            cout<< i <<" "<<numbers[i]<<" "<< "F"<<endl;
        }
        else if(numbers[i]== 16)
        {
            cout<< i<<" " <<numbers[i]<<" "<< "G"<<endl;
        }
        else
        {
            cout<< i<<" " <<numbers[i]<<" "<< i <<endl;
        }
    }
    delete []numbers;
}