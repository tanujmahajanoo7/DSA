#include<bits/stdc++.h>
using namespace std;


int DecimaltoOctal(int n)
{
    int ans=0;
    int x=1;

    while(x<=n)
        x*=8;
    x/=8;

    while(x>0)
    {
        int LD=n/x;
        n-=LD*x;
        x/=8;
        ans=ans*10 + LD;
    }
    return ans;
}



int main()
{   
    int n;
    cout<<"Enter a Decimal number: ";
    cin>>n;
    
    cout<<"Your Octal number is: "<<DecimaltoOctal(n)<<endl;

    return 0;
}