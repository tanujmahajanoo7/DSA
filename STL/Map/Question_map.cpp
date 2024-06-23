#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string,string>, vector<int>>mp;

    int n;
    cin>>n;

    for(int i=0; i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        int marks;
        cin>>marks;

        for(int j=0;j<marks;j++)
        {
            int x;cin>>x;
            mp[{a,b}].push_back(x);
        }
    }

    for(auto &it:mp)
    {
        auto &fullname=it.first;
        auto &list=it.second;
        cout<<fullname.first<<" "<<fullname.second<<endl;
        cout<<list.size()<<endl;

        for(auto &element : list)
        {
            cout<<element<<" ";
        }
        cout<<endl;

    }
    return 0;  
}


// Input

// 3
// a b 4
// 1 2 3 4
// c d 2
// 1 2
// d f 3
// 2 3 4

// output
// a b
// 4
// 1 2 3 4 
// c d
// 2
// 1 2 
// d f
// 3
// 2 3 4