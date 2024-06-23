#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n-1)); // corner case for n=0, that why we took n 
}


int main()
{    

    cout<<ispowerof2(16);

    return 0;  
}

//If we have to find n-1 then "change" the ( rightmost set bit and next all the bits of n ) 
// 8 =  1 0 0 0
// 7 =  0 1 1 1
//   =  0 0 0 0  so 8 is a power of 2 

//To solve this problem only 1 case should be considered 
//case 1 : n & n-1 = 0 ;