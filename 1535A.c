#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c,d,w1,w2,l1,l2;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a<b)
        {
            w1=b;
            l1=a;
        }
        else
        {
            w1=a;
            l1=b;
        }
        if(c<d)
        {
            w2=d;
            l2=c;
        }
        else
        {
            w2=c;
            l2=d;
        }
        if(w1<l2 || w2<l1) 
        printf("NO\n");
        else 
        printf("YES\n");
    }

}
