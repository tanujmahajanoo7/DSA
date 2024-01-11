/*
#include<iostream>
using namespace std;
void increment(int a)
{
    a++;
    cout<<a<<endl;
}

int main()
{
    int a=2;
    increment(a);
    cout<<a<<endl;
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a=2,b=3;
    int ans=sum(a,b);
    cout<<ans<<endl;
    return 0;
}
*/


#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 4;
    swap(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}
