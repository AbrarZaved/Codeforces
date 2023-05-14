#include<stdio.h>
void BoomBoom()
{
    char a[100],c="hello";
    int i,b,j=0,pass=0;
    gets(a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if (a[i] == c[j]) {
            j++;
            pass++;
            
            if (pass == 5) {
                break;
    }
    }
    }
    if(pass==5)
    printf("YES");
    else
    printf("NO");
}
int main()
{
    BoomBoom();
}