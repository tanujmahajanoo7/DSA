#include <iostream>
using namespace std;

class student
{
public:
    int roll;
    string name;
    int age;

    student()
    {
        cout << "This is Default constructor " << endl;
    }

    student(int a, string b, int c)
    {
        roll=a;
        name=b;
        age=c;
    }

    student(student &a)
    {
        cout<<"Default Copy Constructor"<<endl;
        roll= a.roll;
        name = a.name;
        age = a.age;
    }
    
    bool operator == (student &a) //This is important to check the operator is overload or not
    {
        if(roll==a.roll && name==a.name && age==a.age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

int main()
{
    student a(01,"Sushi",20);
    student r=a; //copy constructor

    if(r==a)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not Same";
    }

    return 0;
}