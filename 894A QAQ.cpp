#include <bits/stdc++.h>
using namespace std;
int countQaqSubsequences(const std::string& s) {
    int count = 0;
    size_t len = s.length();

    for (size_t i = 0; i < len; ++i) {
        if (s[i] == 'Q') {
            for (size_t j = i + 1; j < len; ++j) {
                if (s[j] == 'A') {
                    for (size_t k = j + 1; k < len; ++k) {
                        if (s[k] == 'Q') {
                            count++;
                        }
                    }
                }
            }
        }
    }

    return count;
}

int main() {
    string inputString;
    cin>>inputString;

    int result = countQaqSubsequences(inputString);

    cout <<  result << endl;

}
