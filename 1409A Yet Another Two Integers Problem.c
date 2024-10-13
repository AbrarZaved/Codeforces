#include<stdio.h>
void Hehe()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("0\n");
    else
    {
        c= abs(a-b);
        d=c/10;
        if(c%10==0)
        printf("%d\n",d);
        else
        printf("%d\n",d+1);
    }
}        
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        Hehe();
    }

}


