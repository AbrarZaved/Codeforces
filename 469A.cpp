#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, p, q;
    set<int> levels; 

    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        levels.insert(level); 
    }


    bool passed = true;
    for (int i = 1; i <= n; i++) {
        if (levels.find(i) == levels.end()) { 
            passed = false;
            break;
        }
    }

    if (passed) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
