#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],c=0,ans;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);


        if(n<3){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n-2;i++){
            if(a[i]==a[i+1] && a[i+1]==a[i+2]){
                cout<<a[i]<<endl;
                c=1;
                break;
            }  
        
        }
        if(c==0)
        cout<<-1<<endl;
        }
        
    }
}