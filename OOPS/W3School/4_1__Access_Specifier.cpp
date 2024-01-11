#include<iostream>
using namespace std;

class myclass
{
    // int x=10;
    public:
    int y=20;
};


int main()
{
    myclass obj;
    // cout<<obj.x<<endl;            //This code will not run due to private variable
    cout<<obj.y<<endl;
    return 0;
}