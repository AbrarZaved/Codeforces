#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int d[5];
    cin>>a>>b>>c;
    d[0] = a+b*c;
    d[1] = a*(b+c);
    d[2] = a*b*c;
    d[3] = (a+b)*c;
    d[4] = a+b+c;

    sort(d,d+5);
    cout<<d[4];
}