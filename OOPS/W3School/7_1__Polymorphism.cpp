#include<iostream>
using namespace std;

class Animal
{
    public:
    void animalsound()
    {
        cout<<"The animal makes sound \n";
    }
};

class pig : public Animal
{
    public:
    void animalsound()
    {
        cout<<"The pig says: Wee wee \n";
    }
};

class dog : public Animal
{
    public:
    void animalsound()
    {
        cout<<"The dog says: bow wow \n";
    }
};



int main()
{
    Animal obj1;
    pig obj2;
    dog obj3;

    obj1.animalsound();
    obj2.animalsound();
    obj3.animalsound();
    
    return 0;
}