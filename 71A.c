#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        char a[100];
        int b,c,d;
        gets(a);
        b=strlen(a);
        if(b>10)
        printf("%c%d%c\n",a[0],b-2,a[b-1]);
        else
        printf("%s\n",a);
    }

}
