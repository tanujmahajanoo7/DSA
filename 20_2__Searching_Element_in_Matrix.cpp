// 5
// 3 3
// 89 17 10
// 6 8 1
// 17 89 35


#include <iostream>
using namespace std;

int main()
{
    int k;
    cin>>k;

    int n;int m;
    cin>>n>>m;
    int arr[n][m];

    bool flag=false;    

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==k)
            {
                cout<<i<<" "<<j<<endl;
                flag = true ;
            }
        }
    }

    if(flag==true)
    {
        cout<<"element found ";
    }
    else
    {
        cout<<"Element not found ";
    }



    return 0;
}
