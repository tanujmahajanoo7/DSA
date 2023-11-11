#include<bits/stdc++.h>
using namespace std;


int DecimaltoBinary(int n)
{
    int ans=0;
    int x=1;

    while(x<=n)
        x*=2;
        x/=2;

    while(x>0)
    {
        int LD=n/x;
        n-=LD*x;
        x/=2;
        ans=ans*10 + LD;
    }
    return ans;
}



int main()
{   
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    
    cout<<"Your Binaary number is: "<<DecimaltoBinary(n)<<endl;

    return 0;
}







/*
#include <bits/stdc++.h>
using namespace std;

void DTB(int n)
{

    int a[32];
 
    int i=0;

    while(n>0)
    {
        a[i] = n%2;

        n = n/2;

        i++;
    }

    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }
}

int main()
{
    int n;
    cin>>n;
    DTB(n);
    
    return 0;
}

*/