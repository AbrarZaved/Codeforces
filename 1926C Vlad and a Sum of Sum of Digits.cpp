#include <iostream>

int get_sum_digits(int num) {
    int sum_digits = 0;
    while (num) {
        sum_digits += num % 10;
        num /= 10;
    }
    return sum_digits;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int sum_digits = 0;
        for (int i = 1; i <= n; ++i) {
            sum_digits += get_sum_digits(i);
        }

        std::cout << sum_digits << std::endl;
    }

    return 0;
}
