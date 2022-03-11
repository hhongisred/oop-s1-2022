#include<iostream>
using namespace std;

void print_scaled_matrix(int array[3][3], int scale)
{
    int i, j;
    int new_array[3][3];

    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
        {
            new_array[i][j] = array[i][j] * scale;
            cout << new_array[i][j] << " ";

        }
        cout << endl;

    }
}