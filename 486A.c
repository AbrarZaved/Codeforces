#include<stdio.h>
int main()
{
    int i,a,sum=0,b=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        sum =  sum + i;
        else
        b = b + i*-1;
    }
    int total = b + sum;
    printf("%d",total);
}