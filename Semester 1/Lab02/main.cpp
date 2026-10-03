#include <iostream>
#include <cmath>

// ВАРИАНТ 10

int main() {
    double N = 0.0;
    double X = 0.0;

    std::cout << "N = ";
    std::cin >> N;

    if (N <= 0 || N >= 100) {
        std::cout << "Ошибка: 0 < N < 100" << std::endl;
        return 1;
    }

    std::cout << "X = ";
    std::cin >> X;

    if (X <= 0 || X >= 100) {
        std::cout << "Ошибка: 0 < X < 100" << std::endl;
        return 1;
    }

    double result = std::pow(X, 1.0 / N);
    std::cout << "Результат: " << result << std::endl;
    return 0;
}