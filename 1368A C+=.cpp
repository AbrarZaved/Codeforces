#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int a,b,n,count=0;
        cin>>a>>b>>n;
        while(true){
            if(a>b)
            b+=a;
            else 
            a+=b;

            count++;

            if(a>n || b>n)
            break;

        }
        cout<<count<<endl;

    }
}