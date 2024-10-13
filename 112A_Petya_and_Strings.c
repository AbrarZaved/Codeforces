#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,count=0,total=0;
    gets(a);
    gets(b);
    int c =  strlen(a);
    for(i=0,j=0;i<c,j<c;i++,j++)
    {
        if(a[i]>b[j])
        count++;
        else if(a[i]<b[j])
        total++;
    }
    printf("%d %d",count,total);
}