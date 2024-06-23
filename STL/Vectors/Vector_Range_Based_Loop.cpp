#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6};

    for(int value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    
    for(int &value : v)         //Actual values are changing
    {
        value++;
    }
    
    for(int value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    
    vector<pair<int,int>> v_p = {{1,2},{3,4}};
    for(pair<int,int> &value : v_p)
    {
        cout<<value.first<<" "<<value.second<<"   ";        //priting pair
    }
    cout<<endl;

    vector<pair<int,int>> vpauto = {{1,2},{3,4},{5,6}};    
    for(auto ita=vpauto.begin();ita!=vpauto.end();ita++)    //Use of auto keyword
    {
        cout<<(*ita).first << " "<<(*ita).second << "   ";
    }
    cout<<endl;

    // vector<pair<int,int>> v_p = {{1,2},{3,4}};
    // for(auto &value : v_p)
    // {
    //     cout<<value.first<<" "<<value.second<<" ";
    // }
    // cout<<endl;


    return 0;  
}

