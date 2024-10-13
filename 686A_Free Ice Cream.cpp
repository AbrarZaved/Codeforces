#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    long long i=1,count=0;
    while(i<=n){
        long long a;
        char c;
        cin>>c;
        cin>>a;
        if(c=='+')
        x+=a;
        else if(c=='-' && x>=a)
        x-=a;
        else
        count++;

        i++;
    }
    cout<<x<<" "<<count;
}