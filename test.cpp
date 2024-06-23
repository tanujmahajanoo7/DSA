#include <bits/stdc++.h>
using namespace std;

    bool isAnagram(string s, string t) 
    {
        map<char,int>count;
        for(int i=0;i<s.size();i++)
        {
            count[s[i]]++;
            count[t[i]]++;
        }
        
        
    }

int main()
{
    string s,t;
    cin>>s;
    cin>>t;

    cout<<isAnagram;

    return 0;
}