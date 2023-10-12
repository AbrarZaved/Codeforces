#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int count=0;
    cin>>a;
    for(int i=0;i<5;i++){
        string b;
        cin>>b;
        if(a[0]==b[0]){
            cout<<"YES";
            count=0;
            break;
        }
        else if(a[1]==b[1]){
            cout<<"YES";
            count=0;
            break;
        }
        else
        count=1;
    }
    if(count==1)
    cout<<"NO";
}