#include <iostream>
#include <climits>

// ВАРИАНТ 10

int main()
{
    int n = 0;
    std::cout << "Количество чисел: ";
    std::cin >> n;

    int summa = 0;
    int min_number = INT_MAX;
    int position = 0;

    for (int i = 0; i < n; ++i) {
        int x = 0;
        std::cout << "Число: ";
        std::cin >> x;
        if (x % 10 != 1) {
            summa += x;
            if (x < min_number) {
                min_number = x;
                position = i + 1;
            }
        }
    }

    if (position == 0) {
        std::cout << "Все числа заканчиваются на 1" << std::endl;
    }
    else {
        std::cout << "Сумма: " << summa << std::endl;
        std::cout << "Наименьшее число: " << min_number << std::endl;
        std::cout << "Номер этого числа: " << position << std::endl;
    }
    return 0;
}