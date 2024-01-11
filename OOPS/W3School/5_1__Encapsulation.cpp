#include<iostream>
using namespace std;

class myclass
{
    private:
    int salary;
    public:
    int setsalary(int s)
    {
        salary=s;
    }
    
    int getsalary()
    {
        return salary;
    }
};


int main()
{
    myclass obj;
    obj.setsalary(5000);
    cout<<obj.getsalary()<<endl;
    return 0;
}