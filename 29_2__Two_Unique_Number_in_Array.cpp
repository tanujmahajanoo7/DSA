// Write a program to find two unique number in an array where all numbers except two are present twice .
// {2,4,6,7,4,5,6,2} output 7,5 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Setbit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}

int unique(int arr[],int n)
{
    int xorsum=0;

    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }

    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }

    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(Setbit(arr[i],pos-1))
        {
            newxor=newxor^arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;

}

int main()
{
    // int arr[]={2,4,6,3,4,6,2};

    int arr[]={1,2,3,4,5,3,2,1};


    unique(arr,8);
    

    return 0;  
}
