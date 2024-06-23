// write a program to count the number of ones in binary representation of a number 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int numberofonce(int n)
{
    int count=0;
    while(n)
    {
        n =(n & (n-1)); // IMP " & operation in bit "
        count++;
    }
    return count;
}


int main()
{
    cout<<numberofonce(19);

    return 0;  
}

