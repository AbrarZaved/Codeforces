#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int d=n*m;
        if(d%2!=0)
        cout<<d/2+1<<endl;
        else
        cout<<d/2<<endl;
    }
}