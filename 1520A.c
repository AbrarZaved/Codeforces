#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[50],i,j,count=0;
        scanf("%d",&n);\
        for(i=0;i<n;i++)
        scanf("%c",&a[i]);
        for(i=0,j=n;i<n,j>0;i++,j--)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count<n)
        printf("NO\n");
        else if((count+1)==n)
        printf("YES\n");
        else
        printf("YES\n");
    }
}
