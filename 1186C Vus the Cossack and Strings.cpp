#include <iostream>
using namespace std;

int CalculateEven(const string &a, const string &b) {
    int count = 0;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i])
            ++count;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    int lengthof_a = a.length();
    int lengthof_b = b.length();
    int numberofsub = lengthof_a - lengthof_b + 1;
    int count = 0;

    // Initial calculation for the first substring
    int c = CalculateEven(b, a.substr(0, lengthof_b));
    if (c % 2 == 0)
        ++count;

    // Iterate over the remaining substrings and update the count efficiently
    for (int i = 1; i < numberofsub; ++i) {
        // Update the count based on the difference between the current and previous substrings
        if (a[i - 1] != b[0])
            --c;
        if (a[i + lengthof_b - 1] != b[lengthof_b - 1])
            ++c;

        if (c % 2 == 0)
            ++count;
    }

    cout << count << endl;


}
