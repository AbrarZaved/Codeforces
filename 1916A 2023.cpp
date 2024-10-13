#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        int a[n];
        int product=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            product*=a[i];
        }
        b--;
        if(2023%product==0){
            cout<<"YES"<<endl;
            cout<<2023/product<<" ";
            while(b--){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        cout<<"NO"<<endl;
        
    }
}