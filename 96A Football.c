#include<stdio.h>
void Boom()
{
    char a[100];
    int zero=0,one=0;
    gets(a);
    int b=strlen(a);
    for(int i=0;i<b;i++)
    {
        if(a[i]=='0')
        {
            ++zero;
            one=0;
            if(zero==7)
            {
                printf("YES");
                break;
            }      
        }
        else if(a[i]=='1')
        {
            ++one;
            zero=0;
            if(one==7)
            {
                printf("YES");
                break;
            }
        }
        
    }
    //printf("%d %d",zero,one);
    if(zero!=7 && one!=7)
        printf("NO");

}
int main()
{
    Boom();

}