
// Input
// 10101
// 11010

// Output
// 101111

#include<iostream>
using namespace std;

int reverse(int n)
{
    int ans = 0;
    while(n>0)
    {
        int lastdigit = n%10;
        ans = ans *10 + lastdigit;
        n/=10;
    }
    return ans;
}

int AddBinaryNumber(int a,int b)
{
    int ans=0;
    int previouscarry=0;

    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans=ans*10 + previouscarry;
            previouscarry=0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if(previouscarry==1)
            {
                ans=ans*10 + 0;
                previouscarry=1;
            }
            else
            {
                ans=ans*10 + 1;
                previouscarry=0;
            }
        }
        else if(a%2==1 && b%2==1)
        {
            ans=ans*10 + previouscarry;
            previouscarry=1;
        }
        a/=10;
        b/=10;
    }

    while(a>0)
    {
        if(previouscarry==1)
        {
            if(a%2 == 1)
            {
                ans=ans*10;
                previouscarry=1;
            }
            else
            {
                ans=ans*10+1;
                previouscarry=0;
            }
        }
        else
        {
            ans=ans*10 + (a%2);
            previouscarry = 0;
        }
        a/=10;
    }

    while(b>0)
    {
        if(previouscarry==1)
        {
            if(b%2 == 1)
            {
                ans=ans*10;
                previouscarry=1;
            }
            else
            {
                ans=ans*10+1;
                previouscarry=0;
            }
        }
        else
        {
            ans=ans*10 + (b%2);
            previouscarry = 0;
        }
        b/=10;
    }
    if(previouscarry==1)
    {
        ans=ans*10+1;
    }
    ans=reverse(ans);
    return ans;

}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<AddBinaryNumber(a,b)<<endl;
    return 0;
}


// PCnext	Ans	Pc	    ld	
// 0    	0	0		0		    a
// 0	    1	1		0		    b
						
// 0    	1	0		0	1	    a
// 1	    0	1		1	0	    b
						
// 1    	0	0		1		    a
// 1	    1	1		1		    b


// pc=previouscarry