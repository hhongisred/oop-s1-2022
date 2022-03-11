#include<iostream>
using namespace std;

int identity(int array[10][10])
{
    int i, j;
    
    bool flag = true;
    
    for (i = 0;i < 10;i++)
    {
        for (j = 0;j < 10;j++)
        {
            if (i == j && array[i][j] != 1)
            {
                flag = false;
            }
            if (i != j && array[i][j] != 0)
            {
                flag = false;
            }
        }
    }
    return flag;
}