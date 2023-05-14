#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],max=0,sum1=0,sum2=0,count=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]>max && count==0) 
        {
            max=a[i];
            count++;
            a[i]=0;
            max=0;
        }
        else if(a[i]>)
       



    }
    printf("%d %d",sum1,sum2);
}