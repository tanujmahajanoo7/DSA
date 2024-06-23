#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for(auto value : s)
    {
        cout<<value<<endl;
    }
    // cout<<endl;
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<(*it)<<endl;
    // }
}


int main()
{
    set<string>s;
    s.insert("abc");    //O(1)
    s.insert("def");
    s.insert("ghi");
    s.insert("ghi");

    auto it = s.find("abc");    //O(1)
    // print(s);
    if(it!=s.end())
    {
        cout<<(*it);
    }
    else
    {
        cout<<" ";
    }

    cout<<endl;

    s.erase("abc");
    cout<<"After earsing abc"<<endl;
    print(s);

    

    return 0;  
}