#include<stdio.h>
int main()
{
    int a, b,i,sum=0,hudai=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b>0)
        sum+=b;
        else
        {
            if(sum<1)
            ++hudai;
            else
            --sum;

        }

    }
    printf("%d",hudai);

}