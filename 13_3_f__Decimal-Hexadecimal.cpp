#include<bits/stdc++.h>
using namespace std;

string Decimaltohexadecimal(int n)
{
    string ans="";
    int x=1;

    while(x<=n)
        x*=16;
    x/=16;

    while(x>0)
    {
        int LD=n/x;
        n-=LD*x;
        x/=16;
        
        if(LD<=9)
        {
            ans=ans+to_string(LD);
        }
        else
        {
            char c = 'A' + LD - 10;
            ans.push_back(c);
        }
    }
    return ans;
}



int main()
{   
    int n;
    cout<<"Enter a Decimal number: ";
    cin>>n;
    
    cout<<"Your Octal number is: "<<Decimaltohexadecimal(n)<<endl;

    return 0;
}