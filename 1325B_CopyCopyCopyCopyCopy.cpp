#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int charArray[n]; 
    for (int i = 0; i < n; ++i) {
            cin >> charArray[i];
    }
    std::unordered_set<int> uniqueChars;
    for (int i = 0; i < n; ++i) {
        uniqueChars.insert(charArray[i]);
    }
    cout <<uniqueChars.size() << endl;

    }
   
}
