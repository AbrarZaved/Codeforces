#include<stdio.h>
void boombam()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,i;
        scanf("%d",&a);
        for(i=1;;i++)
        {
            if(i%10==3 || i%3==0)
            {
                continue;
            }
            if(--a==0) 
            {
                printf("%d\n",i);
                break;
            }

        }
        
    }
}
int main()
{
    boombam();

}