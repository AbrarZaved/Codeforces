#include <stdio.h>

int main()
{
    int i,a,b,rem,lcd,gcd,c,count=0;
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        c=i+1;
        while(c!=0)
        {
            rem = i%c;
            i=c;
            c=rem;
        }

        gcd=i;

        lcd= (i*c)/gcd;
        //printf("LCD = %d\n", lcd);
        //printf("GCD = %d\n", gcd);

        if(lcd/gcd<=3)
            count++;

    }

    printf("%d",count);
    return 0;


}



