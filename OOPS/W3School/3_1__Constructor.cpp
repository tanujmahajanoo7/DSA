#include<iostream>
using namespace std;

class myclass
{
    public:
    myclass()
    {
        cout<<"Hello world ";
    }
};

int main()
{
    myclass obj;    //Only created object of class after that cons

    return 0;
}