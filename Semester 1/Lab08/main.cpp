#include <iostream>

int main() {
    long long number = 12345678987654321;
    unsigned char* ptr = (unsigned char*) &number;

    int size = sizeof(number);
    for (int i = 0; i < size; i++) {
        std::cout << "Байт " << i << ": " << (int)*(ptr + i) << std::endl;
    }
    return 0;
}