#include<stdio.h>
int main()
{
    int t,a[100],b[100],i,j,count=0;
    scanf("%d",&t);
    for(i=0,j=0;i<t,j<t;i++,j++)
    scanf("%d%d",&a[i],&b[j]);
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t; j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
    }

    printf("%d",count);

}