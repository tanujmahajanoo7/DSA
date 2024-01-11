#include<iostream>
using namespace std;

// class myclass
// {
//     public:
//     void MyMethod(int a,int b); 
// };

// void myclass :: MyMethod(int a,int b)
// {
//     cout<<a+b<<endl;
//     cout<<"Hello world ";
// } 

// int main()
// {
//     myclass ob;
//     ob.MyMethod(2,2);
//     return 0;
// }

class car
{
    public:
    int speed(int a);   
};

int car :: speed(int a)
{
    return a;
}


int main()
{
    car sp;
    cout<<sp.speed(200);

    return 0;
}
