#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;

    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    q.push("mno");

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;  

    return 0;  
}