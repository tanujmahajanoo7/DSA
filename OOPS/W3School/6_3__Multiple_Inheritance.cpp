#include<iostream>
using namespace std;

// Base class
class myclass
{
    public:
    string brand = "Ford ";
    void b()
    {
        cout<<"This is base class \n";
    }
};

// Another Base class
class myotherclass
{
    public:
    void s()
    {
        cout<<"This is 1'st Child class \n";
    }
};

// Derived class
class mychild : public myclass, public myotherclass
{
    public:
    string gc = "This is 2'nd child class \n";
};

int main()
{
    mychild obj;
    cout<<obj.gc;
    obj.s();
    obj.b();

    return 0;
}