#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) 
    {
        vector<char>vp;
        for(auto it:s)
        {
            vp.push_back(it);
        }

        // for(auto it:vp)
        // {
        //     return it;
        // }

        return vp;
    }
};

int main()
{
    Solution a;
    cout<<a.countSubstrings("abc");
    
    
    

    return 0;  
}