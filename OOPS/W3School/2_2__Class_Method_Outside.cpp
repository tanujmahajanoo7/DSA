#include<iostream>
using namespace std;

class myclass
{
    public:
    void MyMethod(); 
};

void myclass :: MyMethod()
{
    cout<<"Hello world ";
} 

int main()
{
    myclass ob;
    ob.MyMethod();
    return 0;
}