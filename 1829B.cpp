#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n+1],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    a[n]=1;
    int count=0,max=0;
    for(i=0;i<n+1;i++)
    {
        //
        if(a[i]==0)
           ++count;

        else if(a[i]==1){
            if(count>max)
            max=count;
            count=0;
        }
        

    }
    if(count==1)
    cout<<1<<endl;
    else
    cout<<max<<endl;

    }
   

}