#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n-1));
}


int main()
{    

    cout<<ispowerof2(16);

    return 0;  
}

//THe only thing is that (n & n-1) will be zero if n will be the power of 2
// (n & n-1) will be bitwise 
// anding of n, n-1 will be in bit