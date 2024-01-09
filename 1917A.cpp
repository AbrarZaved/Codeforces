#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        int neg=0,zero=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0)
            neg++;
            else if(a[i]==0)
            zero++;
        }
        if(neg%2!=0 || zero!=0)
        cout<<0<<endl;
        else{
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
    }
}