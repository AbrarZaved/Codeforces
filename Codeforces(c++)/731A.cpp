#include <iostream>
#include <string>
using namespace std;

int main() {
    string target;
    cin >> target;

    int rotations = 0;
    char current_char = 'a';

    for (char c : target) {
        int clockwise_rotations = (c - current_char + 26) % 26;
        int counterclockwise_rotations = (current_char - c + 26) % 26;

        rotations += min(clockwise_rotations, counterclockwise_rotations);
        current_char = c;
    }

    cout << rotations << endl;

    return 0;
}
