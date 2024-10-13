#include <iostream>
using namespace std;
int i,j;
int main() {
    int t;
    cin >> t;

    for (int k = 0; k < t; ++k) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j) {
                if (s[i] == s[j]) {
                    cout << s[j];
                    break;
                }
            }

            i = j;
        }

        cout << endl;
    }

}
