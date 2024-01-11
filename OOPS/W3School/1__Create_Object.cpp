#include<iostream>
using namespace std;

class myclass
{
    public:
    string brand;
    string model;
    int year;
};


int main()
{
    myclass car;
    car.brand="oddi";
    car.model="s1";
    car.year=1999;
    cout<<car.brand<<endl<<car.model<<endl<<car.year<<endl;

    myclass car2;
    car2.brand="Mecerdies";
    car2.model="s2";
    car2.year=1990;
    cout<<car2.brand<<endl<<car2.model<<endl<<car2.year<<endl;

    return 0;
}