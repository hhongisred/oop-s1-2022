#include<iostream>
using namespace std;

int flag = 1;

void transform(int num, int radix)
{
    int mod;

    mod = num % radix;
    num = num / radix;

    while (flag && num)
    {
        transform(num,radix);
        flag = 0 ;
    }
     
    
        
        
    
}
void main()
{
    int num,radix; 
    cout<<"type your number and radix(2):"<<endl; 
    cin >>num>>radix; transform(num,radix); cout<<endl; 
} 