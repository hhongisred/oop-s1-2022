#include<iostream>
#include<string>
using namespace std;

int maximum_sum(int *nums,int length)
{
    int max_now = 0;
    int end = 0;
    for(int i =0;i<length;i++)
    {
        end = end + nums[i];
        end = max(end,0);
        max_now = max(max_now,end);

    }
    if (length<0)
    {
        return 0;
    }
    
}