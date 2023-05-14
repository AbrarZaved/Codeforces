#include<stdio.h>
int main()
{
    char a[1000];
    gets(a);
    int i;
    int b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]<=a[i+2])
        printf("%d+",a[i]);
        
    }


}