#include <iostream>

using namespace std;

long long int findMaxK(long long int n) {
    long long int k = n - 1;

    while ((n & k) != 0) {
        k--;
    }

    return k;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        
        cin >> n;

        int maxK = findMaxK(n);

        cout << maxK << endl;

    }



}
