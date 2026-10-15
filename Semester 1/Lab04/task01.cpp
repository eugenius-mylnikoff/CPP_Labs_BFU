#include <iostream>

// ВАРИАНТ 10

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "A, B, C = ";
    std::cin >> a >> b >> c;

    if ((a + b) % c == 0 && c % b == 0) {
        std::cout << (a + b) / c - c / b << std::endl;
    }
    else if ((a + b) % c == 0 && c % b != 0) {
        std::cout << (a + b) / c + b * c << std::endl;
    }
    else {
        std::cout << a - b + c << std::endl;
    }
    return 0;
}