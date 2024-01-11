#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1="fam";
    string s2="ily";
    s1.append(s2);
    cout<<s1<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    string s3="fam";
    string s4="ily";
    cout<<s3+s4<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    cout<<"Accessing 2nd charcter: "<<s1[1]<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    string s="I am the strong person ";
    cout<<s<<endl;
    s.clear();
    cout<<"After clear function: "<<s<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    if(s.empty())
        cout<<"String is empty "<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    string s5="abc";
    string s6="xyz";
    cout<<s6.compare(s5)<<endl;
    cout<<s5.compare(s6)<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    s6="abc";
    if(!s6.compare(s5))
        cout<<"String are equal "<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    string er="HelloHey";
    er.erase(2,2); //Index number and Number of charcter
    cout<<er<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    
    cout<<er.find("Hey")<<endl; //return starting Index
    cout<<"------------------------------------------------------------"<<endl;

    string h="Hey am";
    cout<<h.insert(3," I")<<endl;
    string b=h;
    cout<<b.insert(8," a student")<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    cout<<"size of h: "<<h.size()<<endl;
    cout<<"length of b: "<<b.length()<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    cout<<h.substr(0,3)<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    string p="99";
    int d=stoi(p);
    cout<<d+2<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    cout<<to_string(d) + "00"<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    string o="abfejfeoairizh";
    sort(o.begin(),o.end());
    cout<<o<<endl;
    cout<<"------------------------------------------------------------"<<endl;


    return 0;
}