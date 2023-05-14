#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int c,a,count=0,sum=0;
    scanf("%d",&a);
    if(a<26)
    printf("NO");
    else
    {
        string b;
        cin>>b;
        transform(b.begin(), b.end(), b.begin(), ::tolower);        
        //sort(b.begin(),b.end());
        map<char, int> count;
         for(int i = 0; i < b.size(); i++){
        count[b[i]]++;
        }
        int ans = count.size();
        if(ans==26)
        cout<<"YES";
        else
        cout<<"NO";

    }

}
