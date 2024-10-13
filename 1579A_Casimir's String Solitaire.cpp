#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int b = a.length();
        if(b%2!=0)
        cout<<"NO"<<endl;
        else{
            int A=0,B=0,C=0;
            for(int i=0;i<b;i++){
                if(a[i]=='A')
                A++;
                else if(a[i]=='B')
                B++;
                else
                C++;
            }
            if(B>=A){
                int temp = B-A;
                if(temp==C){
                    cout<<"YES"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}