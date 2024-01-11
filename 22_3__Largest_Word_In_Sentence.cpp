#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int maxlen=0,currlen=0;
    int st=0, maxst=0;
    int i=0;

    while(1)
    {
        
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen = currlen;
                maxst=st;      
            }
            currlen = 0;
            st=i+1;
        }
        else
            currlen++;                  //single line statements can be written without brackets :)

        if(arr[i]=='\0')
            break;                     //  S L S C B W W B

        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++)
        cout<< arr[i+maxst];

    return 0;
}

// 12
// do or dying
// ==>
// 5
// dying