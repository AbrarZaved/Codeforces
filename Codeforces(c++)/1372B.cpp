#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n;
        int min=n;
        for(int i=1;i<=n/2;i++){
            int hudai=lcm(i,n-i);
            if(hudai<min){
                min=hudai;
                a=i;
                b=n-i;
            }

        }
        cout<<a<<" "<<b<<endl;
    }
}