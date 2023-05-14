#include<stdio.h>
int main()
{
    char a[101],b[101];
    int i,j;
    gets(a);
    gets(b);
    int c = strlen(a);
    for(i=0,j=0;i<c,j<c;i++,j++)
    {
        if(a[i]==b[j])
        printf("0");
        else
        printf("1");
    }


}