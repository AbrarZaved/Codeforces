#include<bits/stdc++.h>
using namespace std;
int OddCheck(int A[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=A[i];

    if(sum%2!=0)
    return 1;
    else
    return 0;
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

        if(OddCheck(a,n))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}