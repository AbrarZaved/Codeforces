#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int i,j;
    gets(a);
    gets(b);
    int c = strlen(a);
    for(i=0;i<c;i++)
    {
        if(a[i]==b[i])
        printf("0");
        else
        printf("1");
    }


}