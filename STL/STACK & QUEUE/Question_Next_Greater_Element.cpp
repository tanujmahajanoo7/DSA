#include <bits/stdc++.h>
using namespace std;

vector<int>NGE(vector<int> v)
{
    vector<int>nge(v.size());
    stack<int>s;
    for(int i=0;i<v.size();i++)
    {
        while(!s.empty() && v[i]>v[s.top()])
        {
            nge[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        nge[s.top()]=-1;
        s.pop();
    }
    return nge;
}

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int> nge = NGE(v);

    for(int i=0;i<n;++i)
    {
        cout<<v[i]<<" "<<(nge[i]==-1 ? -1 : v[nge[i]])<<endl;
    }

    return 0;  
}

// Input
// 6
// 4 5 2 25 7 8

// OutPut
// 5 25 25 -1 9 -1

// Receieved Output
// 4 5
// 5 25
// 2 25
// 25 -1
// 7 8
// 8 -1



// Input
// 5
// 20 29 16 22 9
// OutPut
// 29 -1 -1 22 -1
// Receieved Output
// 20 29
// 29 -1
// 16 22
// 22 -1
// 9 -1