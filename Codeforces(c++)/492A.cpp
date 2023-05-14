#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int sum=0,count=0;
    for(int i=1;sum<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum+=j;
        }
        count++;

    }
    printf("%d",count-1);
}