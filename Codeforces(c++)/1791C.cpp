#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--){
        string C;
        //int x=0,y=0,count=0;
        int b;
        int d;
        cin>>b;
        cin>>C;
        
        //int count=0;
        for(int i=0,j=b;i<b,j>0;i++,j--){
            if((C[i] =='1' && C[j]=='0') || (C[i] =='0' && C[j]=='1'))
            b=b-2;
            //else
            //d=d;

                       
        }
        printf("%d\n",b);
    }
}