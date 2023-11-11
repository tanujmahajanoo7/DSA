//check this code once again
// 1    5    3 
// 1 + 125 + 27  =  153

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;
    int originaln=n;
    while(n!=0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        cout<<pow(lastdigit,3)<<" ";
        cout<<sum<<" ";
        n=n/10;
    }
    cout<<sum<<" "<<originaln<<endl;
    if(sum==originaln)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong number"<<endl;
    }

    return 0;
}
