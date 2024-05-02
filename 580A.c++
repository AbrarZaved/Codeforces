#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int ans=1;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            count++;
            ans=max(ans,count);
        }
        else{
            count=1;
        }

    }
    cout << ans << endl;
}