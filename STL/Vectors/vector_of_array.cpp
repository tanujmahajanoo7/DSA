#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    cout<<endl;
}


int main()
{
// Input
// 3
// 3
// 1 2 3
// 2
// 4 5 
// 4
// 6 7 8 9

    int n;cin>>n;
    vector<int>v[n];    /////////////////// same as vector of vector little bit change in declaration 
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        for(int j=0;j<x;j++)
        {
            int a;cin>>a;
            v[i].push_back(x);
        }
    }

    for(int i=0;i<n;i++)
    {
        printvector(v[i]);
    }

    return 0;  
}

