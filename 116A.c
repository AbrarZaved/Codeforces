#include<iostream>
int main()
{
    int a,b[1000],c[1000],total,d[1000],i,great=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d%d",&b[i],&c[i]);
    }
    for(int i=0;i<a;i++)
    {
        total = total -  b[i] + c[i];
        d[i]=total;
        if(d[i]>great)
         great=d[i];

    }

    printf("%d\n",great);


}
