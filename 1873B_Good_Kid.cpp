#include<bits/stdc++.h>
using namespace std;
int product(int A[],int n){
    int total=1;
    for(int i=0;i<n;i++){
        total=total*A[i];
    }
    return total;
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
        sort(a,a+n);
        a[0]=a[0]+1;
        int result = product(a,n);
        cout<<result<<endl;
    }
}