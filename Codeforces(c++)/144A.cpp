#include<bits/stdc++.h>
using namespace std;
int max(int A[],int n){
    int max=0, index;
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
            index=i;
        }
    }
    return index+1;
}
int min(int A[],int n){
    int min=A[0],index;
    for(int i=0;i<n;i++){
        if(A[i]<=min){
            min=A[i];
            index=i;
        }
    }
    return index+1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int d= max(a,n);
    int e= min(a,n);
    if(e==n && d==1){
        cout<<"0";
        return 0;
    }
    if(e>d){
        int ans=(n-e)+(d-1);
        cout<<ans;
    }
    else{
        int ans=(n-e)+(d-1)-1;
        cout<<ans;
    }

}