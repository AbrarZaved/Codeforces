#include<iostream>
using namespace std;

int main()
{
    int n,i,j,odd=0,even=0;  cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {  cin>>a[i] ;
        if(a[i]%2==0)
        even++;
        else
            odd++;
    }
    if(even>odd){
    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        printf("%d",i+1);
    }
    }
    else{
            for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        printf("%d",i+1);
    }
    }
}
