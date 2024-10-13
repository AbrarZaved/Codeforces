#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--){
        string C;
        int x=0,y=0,count=0;
        int b;
        cin>>b;
        cin>>C;
        for(int i=0;i<b;i++){
            if(C[i] =='U')
            y++;
            else if(C[i]=='D')
            y--;
            else if(C[i]=='R')
            x++;
            else if(C[i]=='L')
            x--;

            if(x==1 && y==1){
                printf("YES\n");
                count=10;
                break;
            }
            count=20;


        }
        if(count==20)
        printf("NO\n");
    }
}