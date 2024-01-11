#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;

    cout<<"&a:  "<<&a<<endl<<"p:   "<<p<<endl<<"*q:  "<<*q<<endl<<"**q: "<<**q;

    return 0;
}