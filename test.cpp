#include <bits/stdc++.h>
using namespace std;


void DTB(int n)
{

    int a[32];
 
    int i=0;

    while(n>0)
    {
        a[i] = n % 2;

        n = n / 2;

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