#include <iostream>
#include <unordered_set>
using namespace std;

int countDistinctCharacters(const string& str) {
    unordered_set<char> charSet;
    for (char c : str) {
        charSet.insert(c);
    }
    return charSet.size();
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin >> a;

        int distinctCount = countDistinctCharacters(a);
        int ans= (distinctCount * 2) + (n-distinctCount);
        cout<<ans<<endl; 

    }
    
}
