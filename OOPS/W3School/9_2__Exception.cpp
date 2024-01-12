#include<iostream>
using namespace std;
int main()
{
    try
    {
        int age = 10;
        if(age>20)
        {
            cout<<"Access Granted: Your age is enough! \n";
        }
        else
        {
            throw 505;
        }
    }

    catch (int a)
    {
        cout<<"Access Denied You must be at least 20 year old! \n";
        cout<<"Error: "<<a;
    }
    
    return 0;
}