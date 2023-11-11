#include<iostream>
using namespace std;

int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n,r;
    cout<<"Enter 2 numbers for as n and r for NcR formulae answer: ";
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}