#include <iostream>
using namespace std;

int main()
{
    int n;int m;
    cin>>n>>m;
    int arr[n][m];

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
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


// 3 3
// 89 17 10
// 6 8 1
// 17 89 35