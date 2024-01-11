#include <bits/stdc++.h>
using namespace std;
bool myCompare(pair<int,int> p1, pair<int,int> p2)
{
    return p1.first<p2.first;
}

int main()
{
    cout<<"Pair ";
    pair<int,char> p;
    p.first = 1;
    p.second = 'A';
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    //Question
    
    // 10 16 7 14 5  3  12 9   Input
    // 4  7  2 6  1  0  5  3   Output

    // 3  5  7 9  10 12 14 16  sorted order
    // 1  2  3 4  5  6  7  8   simplification

    int arr[]={10, 16, 7, 14, 5,  3,  12, 9};
    
    vector<pair<int,int>> v;
    // int n=arr.size();        not possible 
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        // pair<int,int> p;
        // p.first=arr[i];
        // p.second=i;

        v.push_back(make_pair(arr[i],i));

    }

    sort(v.begin(),v.end(), myCompare);

    for(int i=0;i<v.size();i++)
    {
        arr[v[i].second]=i;
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}