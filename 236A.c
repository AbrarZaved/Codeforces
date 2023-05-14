#include<stdio.h>
int main()
{
    char a[100];
    int b;
    gets(a);
    b =  strlen(a);
    if(b%2==0)
    printf("CHAT WITH HER!");
    else
    printf("IGNORE HIM!");
    return 0;
}