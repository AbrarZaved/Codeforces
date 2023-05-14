#include<iostream>
using namespace std;
int main()
{
    int count=0;
    for(int i=1;i<=50;i++){
        for(int j=1;j<=50;j++){
            for(int k=1;k<=50;k++){
                cout<<i<<" "<<j<<" "<<k<<endl;
                count++;
                if(count==357)
                break;

            }
            if(count==357)
                break;
        }
        if(count==357)
                break;


    }
    
}