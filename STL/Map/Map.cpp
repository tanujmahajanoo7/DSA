#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;

    m[1]="abc";
    m[2]="abc";
    m[5]="def";
    m[3]="ijk";
    m.insert({4,"lmn"});  //O(log(n))

    for(auto &p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    auto it=m.find(1);
    if(it==m.end())
        cout<<"No value found: ";
    else
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;

    m.erase(3);
    for(auto &p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    m.clear();
    for(auto &p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    return 0;  
}