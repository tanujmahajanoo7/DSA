// Write the all possible subset of set 
// {a, b, c}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;    

void subset(int arr[], int n)
{
    for (int i=0 ; i<(1<<n); i++) //(1<<n) = 2^n
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int arr[4]={1,2,3,4};
    subset(arr,4);   
    
    return 0;  
}

