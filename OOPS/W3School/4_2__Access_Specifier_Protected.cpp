#include<iostream>
using namespace std;

class Employee
{
    protected:
    int salary;
};

class Programmer : public Employee
{
    public:
    int s(int a)
    {
        salary = a;        
    }
    int g()
    {
        return salary;
    }
};

int main()
{
    Programmer obj;
    obj.s(5000);
    cout<<obj.g();
    return 0;
}