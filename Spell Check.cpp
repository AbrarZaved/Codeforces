#include<iostream>
using namespace std;
int main()
{
    string s;
    int a=0, i,n;
    cin>>s;
    for(i=0; i<s.length(); i++){
        if(s[i]=='T' && s[i]=='i' && s[i]=='m'&& s[i]=='u'&&s[i]=='r'){
        a++;
    }
    if(a==1){
        cout<<"YES";
    }
    }

    else cout<<"NO";
}
