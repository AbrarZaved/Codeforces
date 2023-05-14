#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    gets(a);
    for(int i=0;i<1;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        a[i]=a[i]-32;
    }
    printf("%s",a);

}