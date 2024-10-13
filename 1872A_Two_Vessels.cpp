#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        cout<<0<<endl;
        else{
            float d=abs(a-b);
            d=ceil(d/c);
            d=ceil(d/2);
            cout<<d<<endl;
        }

    }
}