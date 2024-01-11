#include <iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30};

    cout<<*arr<<endl;
    cout<<endl;

    int *ptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<" ";
        ptr++;              //It will go 4 bytes next as it's type is int
    }
    cout<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<" ";
        ptr++;
    }

    return 0;
}       