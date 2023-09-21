#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int max=1;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            ++count;
        }
        else{
            count=1;
        }
        if(max<count){
            max=count;
        }
    }
    cout<<max<<endl;
}