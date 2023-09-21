#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string cards;
        cin >> cards;
        if(cards=="abc")
        cout<<"YES"<<endl;
        else{
                    bool possible = false;
 
        // Check all possible swaps
        for (int i = 0; i < 3; ++i) {
            for (int j = i + 1; j < 3; ++j) {
                swap(cards[i], cards[j]);
                if (cards == "abc") {
                    possible = true;
                    break;
                }
                // Swap back to original
                swap(cards[i], cards[j]);
            }
            if (possible) break;
        }
 
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
            
        }
 
 
    
}