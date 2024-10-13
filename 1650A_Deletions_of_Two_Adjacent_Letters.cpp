#include<bits/stdc++.h>
using namespace std;

bool canTransformToCharacter(const string& s, char c) {
    int n = s.length();
    if (s.back() == c) {
        return true;
    }
    for (int i = 0; i < n - 1; i += 2) {
        if (s[i] == c) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        char c;
        cin >> s >> c;

        if (canTransformToCharacter(s, c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
