#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s)
{
    for(auto value : s)
    {
        cout<<value<<endl;
    }
    // cout<<endl;
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<(*it)<<endl;
    // }
}


int main()
{
    unordered_set<string>s;
    s.insert("abc");    //log(n)
    s.insert("def");
    s.insert("ghi");

    auto it = s.find("abc");    //log(n)
    // print(s);
    if(it!=s.end())
    {
        cout<<(*it);
    }
    else
    {
        cout<<" ";
    }

    cout<<endl;

    s.erase("abc");
    cout<<"After earsing abc"<<endl;
    print(s);

    

    return 0;  
}




// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     unordered_set<string> ss;

//     int n;
//     cin>>n;

//     while(n--)
//     {
//         string s;
//         cin>>s;
//         ss.insert(s);
//     }

//     int a;
//     cin>>a;
//     while(a--)
//     {
//         string sf;
//         cin>>sf;

//         auto it = ss.find(sf);

//         if(it==ss.end())
//         {
//             cout<<"No"<<endl;
//         }
//         else
//         {
//             cout<<"Yes"<<endl;
//         }
//     }

    
//     return 0;  
// }


// // Input
// // 8
// // abc
// // def
// // abc
// // ghi
// // jkl
// // ghi
// // ghi
// // abc
// // 3
// // abc
// // ghi
// // akljd

// // Output
// // Yes
// // Yes
// // No