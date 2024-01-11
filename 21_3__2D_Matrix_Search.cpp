#include <iostream>
using namespace std;

int main()
{
    int n;int m;
    cin>>n>>m;
    int target;
    cin>>target;

    int mat[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    int r=0 , c=m-1;
    bool found=false;

    while(r<n && c>=0)
    {
        if(mat[r][c]==target)
        {
            found = true;
        }
        if(mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if(found)
    {
        cout<<"Elemnent found ";
    }
    else
    {
        cout<<"Element Does not exists ";
    }
    return 0;
}

// 3 3 99
// 1 2 3
// 4 5 6
// 7 8 9