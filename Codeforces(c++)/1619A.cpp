#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        int a=s.length();
        if(a%2!=0)
        printf("NO\n");
        else
        {
            for(int i=0,j=a/2;i<a/2,j<a;i++,j++){
            if (s[i]==s[j]){
                count++;
            }  
            else{
                count=0;
                break;
            }
            }
            if(count!=0)
            printf("YES\n");
            else
            printf("NO\n");

        }
        
    }
}