#include <iostream>

int sumDigits(int x) {
    int summa = 0;
    while (x > 0) {
        summa += (x % 10);
        x /= 10;
    }
    return summa;
}

int main()
{
    int n = 0;
    std::cout << "n = ";
    std::cin >> n;

    int array[10000];
    bool sum12 = false;
    for (int i = 0; i < n; ++i) {
        std::cout << "Число №" << i + 1 << ": ";
        std::cin >> array[i];

        if (!sum12 && sumDigits(array[i]) == 12) {
            sum12 = true;
        }
    }

    if (!sum12) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (array[j] < array[i]) {
                    int tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
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