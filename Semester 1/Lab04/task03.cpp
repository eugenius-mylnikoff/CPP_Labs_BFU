#include <iostream>

// ВАРИАНТ 10

int main() {
    int x = 0;
    std::cout << "x = ";
    std::cin >> x;

    std::cout << ((x == -1) ? "Negative number" : "Positive number") << std::endl;
    return 0;
}