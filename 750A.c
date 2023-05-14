#include<stdio.h>
int main()
{
    int time,i,a,b;
    scanf("%d%d",&a,&b);
    int c = 240-b;
    for(i=1;i<=a;i++)
    {
        time = time + i*5;
        if(time>c)
        break;       
    }

    printf("%d",i-1);
}
    
