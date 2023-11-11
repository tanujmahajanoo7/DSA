#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int sum=0;
    for(int counter=1;counter<=n;counter++) //(int counter=1) declaration initialization
    {
        sum=sum+counter;
    }
    cout<<sum<<endl;
    
    return 0;
}