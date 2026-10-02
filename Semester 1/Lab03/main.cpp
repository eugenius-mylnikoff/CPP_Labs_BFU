#include <iostream>

// ВАРИАНТ 10

int main() {
    long long x = 0;
    int i = 0;

    std::cout << "x = ";
    std::cin >> x;

    if (x <= 0 || x >= 1000000000LL) {
        std::cout << "Ошибка: 0 < x < 10^9" << std::endl;
        return 1;
    }

    std::cout << "i = ";
    std::cin >> i;

    if (i < 0 || i > 31) {
        std::cout << "Ошибка: 0 <= i <= 31" << std::endl;
        return 1;
    }

    x = x | (1LL << i);
    std::cout << "Результат: " << x << std::endl;
    return 0;
}