#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int count=0;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9' ){
        cout<<"YES"<<endl;
        count=0;
        break;
        }
        else
        count=1;
    }
    if(count==1)
    cout<<"NO"<<endl;

}
