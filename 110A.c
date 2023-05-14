#include<stdio.h>
int main()
{
    char a[10000];
    int count=0,i;
    gets(a);
    int b= strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]=='4' || a[i]=='7')
        count++;
    }
    if(count==4 || count==7)
    printf("YES");
    else
    printf("NO");

}