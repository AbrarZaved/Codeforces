#include<bits/stdc++.h>
using namespace std;
int add(int A[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=A[i];
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=add(a,n);
        if(ans%2!=0)
        cout<<"NO"<<endl;
        else if(ans%2==0)
        cout<<"YES"<<endl;
    }
}