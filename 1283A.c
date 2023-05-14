#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,h,m;
        scanf("%d%d",&h,&m);
        a=h*60+m;
        b=1440-a;
        printf("%d\n",b);
    }
}