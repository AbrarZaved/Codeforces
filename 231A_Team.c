#include<stdio.h>
int main()
{
    int n,a[3],count=0,one=0,zero=0;
    scanf("%d",&n);
    while(n--)
    {
        for(int i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==1)
            one++;
            else if(a[i]==0)
            zero++;
        }
         
         if(one>zero)
            count++;

         one=0;
        zero=0;   
        

    }
    printf("%d",count);

}