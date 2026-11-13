#include <iostream>

int main() {
    long long number = 0;
    std::cout << "number = ";
    std::cin >> number;
    unsigned char* ptr = (unsigned char*) &number;

    for (int i = 0; i < sizeof(number); ++i) {
        std::cout << "Байт " << i << ": " << (int)*(ptr + i) << std::endl;
    }
    return 0;
}