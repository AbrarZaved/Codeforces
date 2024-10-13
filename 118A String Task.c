#include<stdio.h>
int main()
{
    char a[100];
    int count=0;
    gets(a);
    int b = strlen(a);
    strlwr(a);
    for(int i=0;i<b;i++)
    {
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'Y' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'y' || a[i] == 'i' || a[i] == 'o'|| a[i] == 'u')
        count++;
        else if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            printf(".%c",a[i]);
        
    }
    return 0;
}