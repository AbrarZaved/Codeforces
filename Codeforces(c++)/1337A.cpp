#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && a==c)
        cout<<a<<" "<<b<<" "<<c<<endl;
        else if(max(a,b)+max(b,c)<max(c,d))
        cout<<a<<" "<<c<<" "<<c<<endl;
        else if(max(a,b)+max(b,c)==max(c,d))
        cout<<c<<" "<<c<<" "<<c<<endl;
        else
        cout<<max(a,b)<<" "<<max(b,c)<<" "<<max(c,d)<<endl;
    }
}