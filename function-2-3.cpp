#include<iostream>
#include<string>
using namespace std;



int sum_if_a_palindrome(int integers[], int length)
{
    int num = 0;
	for (int i = 0; i < length / 2; i++) {
		num += integers[i];
	}
	num = num * 2;
	return num;
    
}

bool is_a_palindrome(int integers[], int length)
{
    int half_len = length/2;
    int num = length;

    for (int i=0;i<half_len/2;i++)
    {
        if(integers[i]!=integers[num-1])
        {
            return false;
        }
        else
        {
            return -2;
        }

    }
     
}

int sum_elements(int integers[], int length)
{
    int num = 0;
	for (int i = 0; i < length ; i++) 
    {
		num += integers[i];
	}
	return num;

}