#include <iostream>

// ВАРИАНТ 10

int main()
{
    int n = 0;
    std::cout << "Номер товара: ";
    std::cin >> n;

    switch (n) {
        case 1:
            std::cout << "Хлеб" << std::endl;
            break;
        case 2:
            std::cout << "Колбаса" << std::endl;
            break;
        case 3:
            std::cout << "Сыр" << std::endl;
            break;
        case 4:
            std::cout << "Пельмени" << std::endl;
            break;
        case 5:
            std::cout << "Макароны" << std::endl;
            break;
        case 6:
            std::cout << "Сок" << std::endl;
            break;
        case 7:
            std::cout << "Вода" << std::endl;
            break;
        default:
            std::cout << "Товар не найден" << std::endl;
    }
    return 0;
}