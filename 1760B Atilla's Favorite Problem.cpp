#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max=0;
        char a;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a>max){
                max=a;
            }
        }
        cout<<max-96<<endl;
        
    }
}