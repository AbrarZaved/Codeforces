#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum1=0,sum2=0;
        if(n==2)
        cout<<2<<endl;
        else{
            
        for(int i=1;i<=n;i++){
            if(i<(n/2) || i==n){
                sum1=sum1+pow(2,i);

            }
            else
            sum2=sum2+pow(2,i);
        }
        cout<<sum1-sum2<<endl;
        }
    }
}