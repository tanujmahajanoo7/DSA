#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int GetBit(int n, int i)
{
    return (n>>i) & 1;
}

int SetBit(int n, int i)
{
    return (n|(1<<i));
}

int ClearBit(int n, int i)
{
    int mask = ~(1<<i);
    return n & mask;
}

int ToggleBit(int n, int i)
{
    return (n xor (1<<i));
}

int UpdateBit(int n,int i, int k)
{
    int mask = ~(1<<i);
    n=n & mask;
    return (n | (k<<i));
}

int main()
{
    cout<<endl;
    cout<<"5 = 0 1 0 1 "<<endl<<endl;
    cout<<"GetBit(5,1): "<<GetBit(5,1)<<endl<<endl;
    cout<<"SetBit(5,1): "<<SetBit(5,1)<<endl<<endl;
    cout<<"ClearBit(5,0): "<<ClearBit(5,0)<<endl<<endl;
    cout<<"ToggleBit(5,1): "<<ToggleBit(5,1)<<endl<<endl;
    cout<<"UpdateBit(5,1,1): "<<UpdateBit(5,1,1)<<endl<<endl;

    return 0;  
}

