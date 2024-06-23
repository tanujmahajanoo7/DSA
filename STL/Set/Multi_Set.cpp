#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
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
    multiset<string>s;
    s.insert("abc");    //O(log(n))
    s.insert("def");
    s.insert("ghi");
    s.insert("abc");    

    // print(s);

    // auto it = s.find("abc");    //O(log(n))

    // if(it!=s.end())
    // {
    //     s.erase(it);
    // }

    s.erase("abc");    
    
    print(s);

    // else
    // {
    //     cout<<" ";
    // }

    // cout<<endl;

    // s.erase("abc");
    // cout<<"After earsing abc"<<endl;
    // print(s);

    return 0;  
}