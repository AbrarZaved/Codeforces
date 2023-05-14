#include<stdio.h>
int main()
{
    int a,count,sum=0;
    scanf("%d",&a);
    count = a / 100;
    sum = sum + count;
    int b = a%100;
    count = b/20;
    sum = sum + count;
    int c = b%20;
    count = c/10;
    sum = sum + count;
    int d = c%10;
    count = d/5;
    sum =  sum + count;
    int e = d%5;
    count = e/1;
    sum = sum + count;
    printf("%d",sum);

}
