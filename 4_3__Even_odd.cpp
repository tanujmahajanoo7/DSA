#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any no: ";
    cin>>n;
    
    if(n%2==0)      //modular operator gives remainder
    {
        cout<<"Even ";
    }
    else
    {
        cout<<"Odd ";
    }
    return 0;
}
