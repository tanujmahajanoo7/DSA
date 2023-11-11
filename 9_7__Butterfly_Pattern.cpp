/*
Enter one number: 5
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/
#include <iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter one number: ";
    cin>>n;
    for(int i=1;i<=n;i++) //Row
    {
        for(int j=1;j<=i;j++) //starting star
        {
            cout<<"*";
        }
        int space=2*n-2*i; //formula for space
        for(int j=1;j<=space;j++) //space
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) //ending star
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int spacce = 2*n - 2*i;
        for(int j=1;j<=spacce;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}