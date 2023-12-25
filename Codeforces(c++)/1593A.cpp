#include<bits/stdc++.h>
using namespace std;
int maximum(int A[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(A[i]>max)
        max=A[i];
    }
    return max;  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int max=maximum(a,3);
        if(a[0]==a[1] && a[0]==a[2])
        cout<<"1 1 1"<<endl;
        else if(a[0]==a[1] && a[0]==max) 
        cout<<1<<" "<<1<<" "<<(max-a[2])+1<<endl;
        else if(a[0]==a[2] && a[0]==max )
        cout<<1<<" "<<(max-a[1])+1<<" "<<1<<endl;
        else if(a[1]==a[2] && a[1]==max )
        cout<<(max-a[0])+1<<" "<<1<<" "<<1<<endl;
        else{
            int b[3];
            for(int i=0;i<3;i++){
              if(a[i]==max)
              a[i]=0;
              else
              a[i]=max-a[i]+1;
            }
            cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;

        }

    }
}