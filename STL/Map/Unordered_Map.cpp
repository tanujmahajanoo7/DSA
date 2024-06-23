#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,string> m;

    m[1]="abc";
    m[2]="abc";
    m[5]="def";
    m[3]="ijk";
    m.insert({4,"lmn"});  //O(log(n)
    
    for(auto &p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    return 0;  
}