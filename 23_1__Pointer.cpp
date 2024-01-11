#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr;
    aptr=&a;
 
    cout<<"Value of * aptr: "<<*aptr<<endl;
    cout<<"Value of aptr: "<<aptr<<endl;
    cout<<"Value of &a: "<<&a<<endl;
    cout<<"Value of a: "<<a<<endl;

    *aptr=20;
    cout<<"Value of a after update of * aptr: "<<a<<endl;

    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;

    return 0;
}