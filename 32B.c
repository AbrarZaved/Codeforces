#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int i,b;
    gets(a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
       if(a[i]=='-' && a[i+1]=='.')
        {
            printf("1");
            ++i;
        }
        else if(a[i]=='-' && a[i+1]=='-')
        {
            printf("2");
            ++i;
        }
        else
        printf("0");

    }
}