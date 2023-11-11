#include <iostream>
using namespace std;
int main()
{
    int i=10, j=20, k;
    
      //10   //9   //19  //20  //9   //20  //10  //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    
    cout<<i<<endl; //9  //10 //9   //10
    cout<<j<<endl; //19 //20 //19  //20
    cout<<k<<endl;
    
    return 0;
}

/* 

Debugging Process

i=10 i=10 i=9  -  i=9 i=9 i=10  -  j=20 j=19 j=19  -  j=19 j=20 j=20  -  i=10 i=9 i=9  -  j=20 j=20 j=19  -  i=9 i=10 i=10  -  j=19 j=19 j20

*/

