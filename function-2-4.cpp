#include<iostream>
#include<string>
using namespace std;

int max_integer(int integers[], int length)
{
    int max = integers[0];
    for(int i =1;i < length;i++)
    {
        if(max<integers[i])
        {
            max = integers[i];
        }
    }
    return max;
}

int min_integer(int integers[], int length)
{
    int min = integers[0];

    for(int i = 0;i<length;i++)
    {
        if(min>integers[i])
        {
            min = integers[i];
        }
    }
    return min;
}

int sum_min_and_max(int integers[], int length)
{
    if(length <= 0)
    {
        return -1;
    }
    else
    {
        return max_integer(integers,length) + min_integer(integers,length);
    }

}