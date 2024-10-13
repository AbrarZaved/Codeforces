#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    unordered_map<string, int> nameCount;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;

        if (nameCount.find(name) == nameCount.end()) {
            // Name does not exist in the database
            cout << "OK" << endl;
            nameCount[name] = 1;
        } else {
            // Name already exists, generate a new one
            cout << name << nameCount[name] << endl;
            nameCount[name]++;
        }
    }

    return 0;
}
