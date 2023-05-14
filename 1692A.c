#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[4],count=0;
        for(int i=0;i<4;i++)
        {
            scanf("%d",&a[i]);
            if(a[0]<a[i])
            count++;
        }
        printf("%d\n",count);
    }

}