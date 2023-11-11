/*
Enter number for rows: 5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number for rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++) //IMP
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }   
    return 0;
}