#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int total=0;
    while(a--)
    {
        string b;
        cin>>b;
        if(b[0]=='T')
        total+=4;
        else if(b[0]=='C')
        total+=6;
        else if(b[0]=='O')
        total+=8;
        else if(b[0]=='D')
        total+=12;
        else if(b[0]=='I')
        total+=20;
    }
    cout<<total<<endl;
}