//3 4 5 => True

#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y,int z)
{
    int a=max(x,max(y,z));
    int b,c;
    
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x,y,z;
    cout<<"Enter 3 munbers: ";
    cin>>x>>y>>z;
    if(check(x,y,z))
    {
        cout<<"Pythogorian Triplet";
    }
    else
    {
        cout<<"Not a Pythogorian Triplet";
    }
}