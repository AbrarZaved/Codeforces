#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int burels=0,i=1,j=1;
        for(int b=1;b<=n;b++){
            for(int l=1;l<=m;l++){
                if (j!=m){
                    j++;
                    burels+=i;
                }
                else
                    break;
            }
            if (i!=n){
                i++;
                burels+=j;
            }
            else
                break;
        }
        if (burels==k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}