#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a="codeforces";
        string b;
        cin>>b;
        int count=0;
        for(int i=0;i<10;i++){
            if(a[i]!=b[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}