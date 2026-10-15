#include <iostream>
#include <climits>

// ВАРИАНТ 10

int main() {
    int n = 0;
    std::cout << "n = ";
    std::cin >> n;

    int result_number = 0;
    int result_count = INT_MAX;

    for (int i = 0; i < 10; ++i) {
        int copy_n = n;
        int current_count = 0;
        while (copy_n > 0) {
            int digit = copy_n % 10;
            copy_n /= 10;
            if (digit == i) {
                ++current_count;
            }
        }
        if (current_count > 0 && current_count < result_count) {
            result_count = current_count;
            result_number = i;
        }
    }
    std::cout << result_number << std::endl;

    return 0;
}