#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],max,min;
    for(int i=0;i<n;i++)
    cin>>a[i];
    max=a[0];
    min=a[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            count++;
        }
        else if(a[i]<min){
            min=a[i];
            count++;
        }

    
    }
    cout<<count;



}