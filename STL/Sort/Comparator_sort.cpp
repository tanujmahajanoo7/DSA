#include <bits/stdc++.h>
using namespace std;

bool isgreater(int a,int b)
{
    return (a>b);
}
int main()
{
    int n;
    cin>>n;

    vector<int>vp(n);
    for(int i=0;i<n;i++)
    {
        cin>>vp[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(isgreater(vp[i],vp[j]))
            {
                swap(vp[i],vp[j]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<vp[i]<<" ";
    }
    return 0;
}

// INPUT
// 6
// 12 321 234 1 412 5