#include<iostream>
using namespace std;

void fib(int n)
{
    int t1=0,t2=1;
    int nextterm;
    for(int i=0;i<=n;i++)
    {
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    fib(n);
    return 0;
}