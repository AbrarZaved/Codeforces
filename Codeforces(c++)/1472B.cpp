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
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)
            count1++;
            else
            count2++;
        
        }
        int d = sum(a,n);
        if(count1 %2==0){
            if(count2%2==0){
                cout<<"YES"<<endl;
            }
            else if(count1>0){
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;

    }
}