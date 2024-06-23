// Write a program to find a unique number in an array where all numbers except one are present twice .
// {2,4,6,3,4,6,2}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int unique(int arr[],int n)
{
    int xorsum=0;

    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}

int main()
{
    // int arr[]={2,4,6,3,4,6,2};

    int arr[]={1,2,3,4,3,2,1};


    cout<<unique(arr,7);
    

    return 0;  
}
