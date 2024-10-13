#include<bits/stdc++.h>
using namespace std;
int sum(int A[],int n){
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
        for(int i=0;i<n;i++)
        cin>>a[i];

        int b=sum(a,n);
        if(b<=0|| n>b) 
        cout<<1<<endl;
        else{
            int res=b-n;
            cout<<res<<endl;
        }


    }
}