#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,c,d;
        int A=0,B=0,C=0;
        cin>>b;
        cin>>c;
        cin>>d;
        a=b;
        a.append(c);
        a.append(d);
        //cout<<a<<endl;
        for(int i=0;i<9;i++){
            if(a[i]=='A')
            A++;
            else if(a[i]=='B')
            B++;
            else if(a[i]=='C')
            C++;
        }
        if(A<3)
        cout<<"A"<<endl;
        else if(B<3)
        cout<<"B"<<endl;
        if(C<3)
        cout<<"C"<<endl;
    }
}