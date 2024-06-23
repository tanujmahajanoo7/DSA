#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;

    while(t--)
    {
        long long n,k; cin>>n>>k;

        multiset<long long>bags;
        
        for(int i=0;i<n;i++)
        {
            long long cc;cin>>cc;
            bags.insert(cc);
        }
        long long tc=0;
        for(int i=0;i<k;i++)
        {
            auto l_it = (--bags.end());
            long long cc=* l_it;
            tc+=cc;
            bags.erase(l_it);
            bags.insert(cc/2);
        }
        cout<<tc<<endl;
    }
    

    return 0;  
}


// n = number of candies in single bag
// k = time (finish one bag in one unit time)
// cc = number of candies in single bag
// tc = total number of candies
// l_it = last iterator for candies

// Input
// 1
// 5 3
// 2 1 7 4 2 
// Output
// 14