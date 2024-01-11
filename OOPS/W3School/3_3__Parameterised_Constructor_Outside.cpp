#include<iostream>
using namespace std;

class car
{
    public:
    string brand,model;
    int year;

    car(string b, string m, int y);

};

car :: car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }

int main()
{
    car s1("Audi","S1",1990);
    car s2("BMW","X5",1995);

    cout<<s1.brand<<" "<<s1.model<<" "<<s1.year<<endl;
    cout<<s2.brand<<" "<<s2.model<<" "<<s2.year<<endl;
    
    return 0;
}