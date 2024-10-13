#include<iostream>
int main()
{
    int n,a,b,count=0,total=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        count++;
        else if(b>a)
        total++;
    }

    if(count>total)
    printf("Mishka");
    else if(total>count)
    printf("Chris");
    else
    printf("Friendship is magic!^^");
}
