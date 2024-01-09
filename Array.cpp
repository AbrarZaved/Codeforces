#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],maxNo=INT_MIN,minNO=INT_MAX;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++){
    maxNo=max(maxNo,a[i]);
    minNO=min(minNO,a[i]);
    }
    cout<<maxNo<<" "<<minNO;



}