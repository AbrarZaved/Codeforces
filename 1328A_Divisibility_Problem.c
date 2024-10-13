int main()
{
    int a,b,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(a%b==0)
        printf("0\n");
        else
        printf("%d\n",b-a%b);
        
    }
}