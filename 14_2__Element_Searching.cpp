// Input
// 5
// 14 15 35 98 74
// 98
// Output 3

// Input
// 5
// 14 15 35 98 74
// 5
// Output -1


#include<iostream>
using namespace std;

int linearsearch(int n,int arr[],int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<linearsearch(n,arr,key)<<endl;
    return 0;
}