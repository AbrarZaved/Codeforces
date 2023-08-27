#include<bits/stdc++.h>
using namespace std;
void print(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],count=n-1,j=0;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n/2;i++){
            b[j]=a[i];
            while(count!=0){
                b[j+1]=a[count];
                count=count-1;
                break;

            }
            j=j+2;
        }
        if(n%2!=0){
            b[n-1]=a[n/2];
        }
        print(b,n);
        cout<<endl;



    }
}