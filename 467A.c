#include<stdio.h>
int main()
{
    int a, b[100],i,count=0,d[100],e[100];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d %d",&d[i],&e[i]);


    for(i=0;i<a;i++)
    {
        if(d[i]+2 <= e[i])
        count++;
    }

    printf("%d",count);
}
