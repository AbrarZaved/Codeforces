#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,sum=0,count=0;
        scanf("%d",&a);
        for(int i=0;i<6;i++)
        {
            int d=a%10;
            a=a/10;
            if(i<=2)
            sum+=d;
            else
            count+=d;
        }
        if(sum==count)
        printf("YES\n");
        else
        printf("NO\n");
    }
}