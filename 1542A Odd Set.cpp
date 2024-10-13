#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int even=0,odd=0;
        for(int i=1;i<=2*a;i++)
        {
            int b;
            cin>>b;
            if(b%2!=0)
            odd++;
            else
            even++;
        }
        if(even==odd)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

      
    }
}