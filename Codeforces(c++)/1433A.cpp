#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        string a;
        cin>>a;
        int b=a.length();
        int c=1,d=2,e=3,f=4,sum=0,count=0,i;
        int j=a[0]-48;
        //printf("%d\n",j);
        for(i=0;i<j-1;i++)
        {
            sum+=c;
            sum+=d;
            sum+=e;
            sum+=f;
        }
        for(i=1;i<=b;i++)
        count+=i;
        printf("%d\n",sum+count);
    }
}