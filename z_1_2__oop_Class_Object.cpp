#include <iostream>
using namespace std;

class student
{
    int roll;
    public:
    string name;
    int age;

    int pt(int n)
    {
        roll=n;
    }

    void printn()
    {
        cout<<"Roll number: "<<roll<<endl<<"Name: "<<name<<endl<<"Age: "<<age;
    }
};

int main()
{
    student a;
    a.pt(1);
    // a.roll=1;
    a.name="Abhijeet";
    a.age=21;
    
    a.printn();
    
    return 0;

}