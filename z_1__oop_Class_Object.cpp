#include <iostream>
using namespace std;

class student
{
    public:
    int roll;
    string name;
    int age;

    int printn()
    {
        cout<<"Roll number: "<<roll<<endl<<"Name: "<<name<<endl<<"Age: "<<age;
    }
};

int main()
{
    student a;
    a.roll=1;
    a.name="Abhijeet";
    a.age=21;
    
    a.printn();
    
    return 0;

}