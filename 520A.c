#include<stdio.h>
#include<string.h>
int main()
{
    int c,a,count=0,sum=0;
    scanf("%d",&a);
    if(a<26)
    printf("NO");
    else
    {
        char b[100];
        gets(b);
        strlwr(b);
        for(int i=0;i<a;i++)
        {
            for(int j=97;j<123;j++)
            {
                if(b[i]!=j)
                {
                    count++;
                    break;
                }
                else if(b[i]==j)
                {
                    count=0;
                    break;
                }

            }
            if(count!=0)
            break;

        }
        if(count!=0)
        printf("YES");

    }

}
