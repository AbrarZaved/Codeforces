#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if((a>=b && a==4) || (b>=a && b==4))
    printf("1/2");
    else if(a==6 || b==6) 
    printf("1/6");
    else if((a>=b && a==3) || (b>=a && b==3)) 
    printf("2/3");
    else if((a>=b && a==2) || (b>=a && b==2)) 
    printf("5/6");
    else if((a>=b && a==5) || (b>=a && b==5)) 
    printf("1/3");
    else if((a>=b && a==1) || (b>=a && b==1)) 
    printf("1/1");
    else
    printf("0/1");
}