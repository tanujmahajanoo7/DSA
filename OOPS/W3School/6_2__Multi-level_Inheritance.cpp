#include<iostream>
using namespace std;

class myclass
{
    public:
    string brand = "Ford ";
    void b()
    {
        cout<<"This is base class \n";
    }
};

class child : public myclass
{
    public:
    string c = "This is 1'st Child class \n";
};

class grandchild : public child
{
    public:
    string gc = "This is 2'nd child class \n";
};


int main()
{
    grandchild obj;
    cout<<obj.gc;
    cout<<obj.c;
    obj.b();


    
    return 0;
}