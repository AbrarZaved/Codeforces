#include<stdio.h>
int main()
{
    int i,n,a[101];
    float sum=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum = sum +a[i];
        b = sum/100;
    }
    float total = (b/n)*100;
    printf("%.12f",total);
}