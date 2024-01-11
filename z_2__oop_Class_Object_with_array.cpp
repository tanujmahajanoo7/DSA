#include <iostream>
using namespace std;

class student
{
public:
    int roll;
    string name;
    int age;


    void printn()
    {
        cout<<"Roll number: ";
        cout << roll << endl;
        cout<<"Name: ";
        cout << name << endl;
        cout<<"Age: ";
        cout << age << endl;

        // cout<<"Roll number: "<<roll<<endl<<"Name: "<<name<<endl<<"Age: "<<age;
    }
};

int main()
{
    // int n;
    // cin >> n;
    student a[2];

    for (int i = 0; i < 2; i++)
    {
        cout<<"Roll number: ";
        cin >> a[i].roll;
        cout<<"Name: ";
        cin >> a[i].name;
        cout<<"Age: ";
        cin >> a[i].age;
    }

    cout<<"---------------------------You entered these values:"<<endl;

    for (int i = 0; i < 2; i++)
    {
        a[i].printn();
    }

    return 0;
}