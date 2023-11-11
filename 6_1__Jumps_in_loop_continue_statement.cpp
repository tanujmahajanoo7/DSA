#include <iostream>
using namespace std;
int main()
{
    int pocketmoney;
    cin>>pocketmoney;
    for(int data=1;data<=30;data++)
    {
        if(data%2==0)
        {
            continue;
        }
        if(pocketmoney==0)
        {
            break;
        }
        cout<<"Go out today for shopping !! "<<endl;
        pocketmoney=pocketmoney-300;
        int a=0;
        a=a+1;
        cout<<a;
    }
    return 0;
}   