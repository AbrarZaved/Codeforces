#include<stdio.h>
void Huhu()
{
        int n,a[50],b[50],max=0,min;
        scanf("%d",&n);
        
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        min=a[0];
        for(int i=0;i<n;i++)
        {
            
            if(a[i]>max)
            max=a[i];
            else if(a[i]<min)
            min=a[i];

        }

        printf("%d\n",max-min);

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        Huhu();

    }
}