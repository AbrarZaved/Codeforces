#include<bits/stdc++.h>
using namespace std;
long long int sum(long long int a[],long long int n){
    long long int sum=0;
    for(long long int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++)
        cin>>a[i];
        long long int total=sum(a,n);
        double root=sqrt(total);
        if(root==round(root))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}