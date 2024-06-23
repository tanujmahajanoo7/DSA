#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int>v)
{
    cout<<"size: "<< v.size() << endl;  //Time complexity O(1)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout << endl;
}


int main()
{
    // pair<int,string> p;
    // p=make_pair(1,"abc");

    // p={2,"abc"};

    // // pair<int,string>p1 = p;     //copy by copy 

    // pair<int,string> &p1 = p;      //copy by refrence

    // cout<<p.first<<" "<<p.second<<endl;

    // int a[]={1,2,3};
    // int b[]={1,2,3};

    // pair<int,int> p_array[3];
    // p_array[0]={1,1};
    // p_array[1]={2,2};
    // p_array[2]={3,3};

    // for(int i=0;i<3;i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }

// -----------------------------------------------------------------------------------------------------------------

// Input
// 5
// 1 2 3 4 5


    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     printvector(v);  //Dynamic Size Vector
    //     v.push_back(x);  //Time complexit O(1)
    // }
    // printvector(v);


// -----------------------------------------------------------------------------------------------------------------


    vector<int> p(4);
    printvector(p);
    
    p.push_back(3);
    p.push_back(4);
    printvector(p);

    p.pop_back();

    printvector(p);

// -----------------------------------------------------------------------------------------------------------------    

    return 0;  
}

