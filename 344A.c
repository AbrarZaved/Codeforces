#include<stdio.h>
int main()
{
    int count=0,a,b[100000],i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
        scanf("%d",&b[i]);
    for(i=0;i<a;i++)
    {
        if(b[i]!=b[i+1])
            count++;
    }

    printf("%d",count);
}

