#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[3];
        scanf("%s",a);
        if((a[0]=='Y' || a[0]=='y') && (a[1]=='E' || a[1]=='e') && (a[2]=='S' || a[2]=='s'))
        printf("YES\n");
        else
        printf("NO\n");
    }
}