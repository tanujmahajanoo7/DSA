#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sum(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=i;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;
}