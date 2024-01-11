#include <iostream>
using namespace std;

class complex
{
    private:
    int real;
    int imag;

    public:
    void input()
    {
        cin>>real>>imag;
    }

    complex operator +(complex obj)
    {
        complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    void output()
    {
        cout<<real<<"+"<<imag<<endl;
    }
};



int main()
{
    complex com1, com2, res;
    com1.input();
    com2.input();
    res=com1+com2;
    res.output();
    return 0;   
}


// https://youtu.be/edfATDog-LQ?si=44b9nk78OknjgY24