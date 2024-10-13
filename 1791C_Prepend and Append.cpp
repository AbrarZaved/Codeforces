#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        int n,count=0;
        cin>>n;
        cin>>a;
        int b=a.length();
        for(int i=1;i<=n/2;i++){
            if(a[i-1]=='1' && a[n-i]=='0')
            b=b-2;
            else if(a[i-1]=='0' && a[n-i]=='1')
            b=b-2;
            else
            count=1;

            if(count==1)
            break;

        }      
        printf("%d\n",b);
    }
}