#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],ch;
    int b,n=0,count=0,i;
    gets(s1);
    b = strlen(s1);
    for(i=0;i<b;i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        count++;
        else
        n++;
    }

    if(count>n)
    {
        strupr(s1);
        printf("%s",s1);
    }

    else
    {
        strlwr(s1);
        printf("%s",s1);
    }

    return 0;

}
