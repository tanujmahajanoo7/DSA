#include<iostream>
using namespace std;

class vehicle
{
    public:
    string brand = "Ford ";
    void honk()
    {
        cout<<"Tuut, tuut! \n";
    }
};

class car : public vehicle
{
    public:
    string model = "Mustang";
};


int main()
{
    car obj;
    cout<<obj.model<<endl;
    cout<<obj.brand<<endl;
    obj.honk();


    
    return 0;
}