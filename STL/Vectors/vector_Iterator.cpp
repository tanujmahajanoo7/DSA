#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};

    for(int i = 0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it=v.begin();

    // cout<< (*(it+1))<<endl;

    for(it=v.begin();it!=v.end();it++)
    {
        cout<<(*it) << " ";
    }
    cout<<endl;
    cout<<endl;

    vector<pair<int,int>> vp = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator ita;

    for(ita=vp.begin();ita!=vp.end();ita++)
    {
        cout<<(*ita).first << " "<<(*ita).second << endl;
    }
    cout<<endl;

    for(ita=vp.begin();ita!=vp.end();ita++)
    {
        cout<<ita->first << " "<<ita->second << endl;
    }
    cout<<endl;

    vector<pair<int,int>> vpauto = {{1,2},{3,4},{5,6}};    //Use of auto keyword //Can skip the iterator part
    for(auto ita=vpauto.begin();ita!=vpauto.end();ita++)
    {
        cout<<(*ita).first << " "<<(*ita).second << endl;
    }
    cout<<endl;


    return 0;  
}