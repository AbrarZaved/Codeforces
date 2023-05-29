#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fast()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fast();
    int s,n;
    ll r[60],p[60];
    cin>>s;
    while(s--){
        cin>>n;
        ll rMin = 1000000001,pMin = 1000000001;
        for(int i=0; i<n; i++){
            cin>>r[i];
            if(rMin > r[i]){
                rMin = r[i];
            }
        }
        for(int i=0; i<n; i++){
            cin>>p[i];
            if(pMin > p[i]){
                pMin = p[i];
            }
        }
        ll c = 0,m = 0;
        for(int i=0; i<n; i++){
            if(r[i] > rMin && p[i] > pMin){
                m = min(r[i],p[i]);
                r[i] = r[i] - (m - min(rMin,pMin));
                p[i] = p[i] - (m - min(rMin,pMin));
                c += (m - min(rMin,pMin));
                if(r[i] > rMin){
                    c += r[i] - rMin;
                    r[i] -= r[i] - rMin;
                }
                else if(p[i] > pMin){
                    c += p[i] - pMin;
                    p[i] -= p[i] - pMin;
                }
            }
            else if(r[i] == rMin && p[i] > pMin){
                c += p[i] - pMin;
                p[i] -= p[i] - pMin;
            }
            else if(r[i] > rMin && p[i] == pMin){
                c += r[i] - rMin;
                r[i] -= r[i] - rMin;
            }
        }

        cout<<c<<endl;

    }

    return 0;
}