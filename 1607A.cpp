#include<bits/stdc++.h>
using namespace std;
int firstIndex(string a,int b[],string s,int n){
    int key=s[0];
    for(int i=0;i<n;i++){
        if(key==a[i]){
            return b[i];
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,s;
        cin>>a;
        cin>>s;
        int b[]={1,2,3,4,5,6,7,8,9,10,11,12,13
        ,14,15,16,17,18,19,20,21,22,23,24,25,26};
        int sum=0;
        int first=firstIndex(a,b,s,a.length());
        //cout<<first<<endl;
        for(int i=1;i<s.length();i++){
            for(int j=0;j<a.length();j++){
                if(s[i]==a[j]){
                    sum=sum+abs(first-b[j]);
                    first=b[j];
                    
                }
            }
        }
        cout<<sum<<endl;
    }
}