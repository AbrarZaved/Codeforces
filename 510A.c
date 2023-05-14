#include<stdio.h>
int main()
{
    int j,r,c,i;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=c;j++)
            {
                printf("#");
            }
        }
        else if(i==2||i==6||i==10||i==14||i==18||i==22||i==26||i==30||i==34||i==38||i==42||i==46||i==50)
        {
            for(j=1;j<=c-1;j++)
            {
                printf(".");
            }
            printf("#");
        }
        else 
        {
            printf("#");
            for(j=1;j<=c-1;j++)
            {
                printf(".");
            }
            
        }



        printf("\n");
    }
}