#include<stdio.h>

int prime(int a)
{
    int c;

    for ( c = 2 ; c <= a - 1 ; c++ )
    {
        if ( a%c == 0 )
            return 0;
    }
    return 1;
}

int main()
{
    int n, result;

    int t;
    scanf("%d%d",&n,&t);

    for(int i=n+1; i<=t; i++)
    {
        result = prime(i);
        if(result ==1 && i==t)
        {
            printf("YES");
            break;
        }
        else if((result==1 && i!=t))
        {
            printf("NO");
            break;
        }
        else if((result==0 && i==t))
        {
            printf("NO");
            break;
        }
    }


    return 0;
}

