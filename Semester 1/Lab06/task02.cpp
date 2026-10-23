#include <iostream>
#include <utility>

int prodDigits(int x) {
    int product = 1;
    while (x > 0) {
        product *= (x % 10);
        x /= 10;
    }
    return product;
}

int sumDigits(int x) {
    int summa = 0;
    while (x > 0) {
        summa += (x % 10);
        x /= 10;
    }
    return summa;
}

int main() {
    int n = 0;
    std::cout << "n = ";
    std::cin >> n;

    int array[1000];
    for (int i = 0; i < n; ++i) {
        std::cout << "Число №" << i + 1 << ": ";
        std::cin >> array[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int a = prodDigits(array[i]);
            int b = prodDigits(array[j]);

            if (a > b) {
                std::swap(array[i], array[j]);
            }
            else if (a == b) {
                int c = sumDigits(array[i]);
                int d = sumDigits(array[j]);
                
                if (c > d || (c == d && array[i] > array[j])) {
                    std::swap(array[i], array[j]);
                }
            }
        }
    }

    std::cout << "Результат: ";
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    return 0;
}