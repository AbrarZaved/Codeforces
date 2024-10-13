#include<stdio.h>
void Haha(int x,int y,int z)
{
    if(x==0 && y==0 && z==0)
    printf("YES");
    else
    printf("NO");
}

int main()
{
    int n,a[3], x=0,y=0,z=0;
    scanf("%d",&n);
    while(n--)
    {
        for(int i=0;i<3;i++)
            scanf("%d",&a[i]);

        x+=a[0];
        y+=a[1];
        z+=a[2];
    
    }
    Haha(x,y,z);
}
