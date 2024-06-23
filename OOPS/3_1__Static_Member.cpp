#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Employee
{
    int id;

    public:
    static int count; //static word will connect to all objects 
    void setdata(void)
    {
        cout<<"Enter the id: "<<endl;
        cin>>id;
        count++; //static varible can be used in simple function
    }
    void getdata(void)
    {
        cout<<"The id of Employee is: " <<id <<"And count is: "<<count <<endl;
    }
    static void getcount(void) //staic function cant use simple variable as it only use the static variable
    {
        cout<<"The value of count is : "<<count <<endl;
    }
};

int Employee :: count=1000; // It initialised by default with zero
//This is important to share static variable information



int main()
{    
    //count is static data member of class Employee
    Employee harry, rohan, Lovish;
    harry.setdata();
    harry.getdata();
    Employee::getcount(); // Static data member cant called by object
    
    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    Lovish.setdata();
    Lovish.getdata();
    Employee::getcount();

    return 0;  
}