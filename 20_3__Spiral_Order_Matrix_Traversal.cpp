#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // spiral order print

    int row_s = 0, row_e = n - 1, col_s = 0, col_e = m - 1; // s=start e=end

    while (row_s <= row_e && col_s <= col_e)
    {
        // for row start
        for (int col = col_s; col <= col_e; col++)
        {
            cout << arr[row_s][col] << " ";
        }
        row_s++;

        // for column end
        for (int row = row_s; row <= row_e; row++)
        {
            cout << arr[row][col_e] << " ";
        }
        col_e--;

        // for row end
        for (int col = col_e; col >= col_s; col--)
        {
            cout << arr[row_e][col] << " ";
        }
        row_e--;

        // for column start
        for (int row = row_e; row >= row_s; row--)
        {
            cout << arr[row][col_s] << " ";
        }
        col_s++;
    }

    return 0;
}

/*
Input
5 6
1  5  7  9  10 11
6  10 12 13 20 21
9  25 29 30 32 41
15 55 59 63 68 70
40 70 79 81 95 105

Output
1 5 7 9 10 11 21 41 70 105 95 81 79 70 40 15 9 6 10 12 13 20 32 68 63 59 55 25 29 30 29

*/