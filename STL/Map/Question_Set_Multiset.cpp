#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,multiset<string>> mp;

    int n;cin>>n;

    for(int i=0;i<n;i++)
    {
        string name;cin>>name;
        int marks;cin>>marks;

        int count = name.size();

        mp[marks].insert(name);

    }
    auto curr_it = --mp.end();

    while(true)
    {
        auto &students = curr_it->second;       //Both lines have same meaning
        // auto &students = (*curr_it).second;
        int marks = curr_it->first;

        for(auto st : students)
        {
            cout<<st<<" "<<marks<<endl;
        }
        if(curr_it==mp.begin())
        {
            break;
        }
        curr_it--;
    }    

    return 0;  
}

// Inpput
// 4
// Eve 78
// Bob 99
// Alice 78
// Alice 78

// Output
// Bob 99
// Alice 78
// Alice 78
// Eve 78