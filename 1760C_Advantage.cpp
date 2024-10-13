#include<bits/stdc++.h>
using namespace std;
int findMax(int arr[], int size) {
    int maxVal = INT_MIN;
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}
int findSecondMax(int arr[], int size) {
    int maxVal = INT_MIN;
    int secondMax = INT_MIN;
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= maxVal) {
            secondMax = maxVal;
            maxVal = arr[i];
        } else if (arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        int max=findMax(a,n);
        int second=findSecondMax(a,n);
        for(int i=0;i<n;i++){
            if(a[i]==max)
            cout<<a[i]-second<<" ";
            else
            cout<<a[i]-max<<" ";
        }
        cout<<endl;
    }

}
