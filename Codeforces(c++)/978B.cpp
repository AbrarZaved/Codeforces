#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string a;
    cin>>n;
    cin>>a;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(a[i]=='x' && a[i+1]=='x'&& a[i+2]=='x')
        count++;
    }
    cout<<count<<endl;


}