#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    int m[a][b];
    for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
    {
        scanf("%c",&m[i][j]);
        if(m[i][j]=='W' || m[i][j]=='B' || m[i][j]=='G'){
            count=1;
            break;
        }
        if(count==1)
        break;
        else
        count=-1;

    }
    if(count==1)
    printf("#Black&White");
    else if(count==-1)
    printf("#Color");
}