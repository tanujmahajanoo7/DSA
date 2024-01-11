#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;


    v.pop_back(); // 1 2 3

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;


    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;


    vector<int> v2(3,50);
    // 50 50 50 

    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;


    swap(v,v2);
    cout<<"Element of v and v2 after swaping"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;


    sort(v2.rbegin(),v2.rend());
    cout<<"Elements of v2 after reverse sorting "<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;


    sort(v2.begin(),v2.end());
    cout<<"Elements of v2 after sorting "<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;


    return 0;
}
