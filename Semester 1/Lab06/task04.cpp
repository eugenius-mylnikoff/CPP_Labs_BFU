#include <iostream>

int prodDigits(int x) {
    int product = 1;
    while (x > 0) {
        product *= (x % 10);
        x /= 10;
    }
    return product;
}

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n = 0;
    std::cout << "n = ";
    std::cin >> n;

    // Если вдруг ничего не удалим и все элементы будут простые,
    // то все 10000 элементов будут продублированы,
    // значит нужно брать 20000
    int array[10000 * 2];
    for (int i = 0; i < n; ++i) {
        std::cout << "Число №" << i + 1 << ": ";
        std::cin >> array[i];
    }

    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (prodDigits(array[i]) % 70 != 0) {
            array[newSize] = array[i];
            newSize++;
        }
    }

    for (int i = 0; i < newSize; ++i) {
        if (isPrime(array[i])) {
            for (int j = newSize; j > i; --j) {
                array[j] = array[j - 1];
            }
            array[i + 1] = array[i];
            newSize++;
            i++;
        }
    }

    for (int i = 0; i < newSize; ++i) {
        std::cout << array[i] << " ";
    }
    return 0;
}