#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,count=1;
        cin>>a>>b>>c;
        if(a%2!=0 && b%2!=0 && c==1)
        cout<<"YES"<<endl;
        else
        {
            while(a%2==0)
            {
                a/=2;
                count*=2;
            }            
            
            while(b%2==0)
            {
                b/=2;
                count*=2;
            
            }
            //--count;
            if(count>=c)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;

        }
    }
}