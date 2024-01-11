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

public:
    student(int n)
    {
        roll = n;
        cout << "This is parameterised constructor " << endl;
    }

public:
    student(int n, int a)
    {
        cout << "This is parameterised constructor " << endl;
    }

    ~student()
    {
        cout << "Distructor called " << endl;
    }

    // student(&a)
    // {
    //     cout<<"Default copy consturctor";
    // }

};

int main()
{
    student();
    student(1);
    student(1, 2);

    student a(01,"Sushi",20);
    student r=a; //copy constructor

    return 0;
}