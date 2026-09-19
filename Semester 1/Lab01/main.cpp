#include <iostream>
#include <climits>
#include <cfloat>

/*
ТЕОРИЯ:
Переменная - некоторая область памяти, которая обладает именем, 
она предназначена для хранения данных определённого типа,
по имени можно обращаться к переменной.

Типы данных в C++:
- целые знаковые (char, short, int, long long)
- целые беззнаковые (unsigned char, unsigned short, unsigned int, unsigned long long)
- вещественные (float, double)
- символьный (char)
- логический (bool)

Знаковый тип (signed) может хранить как положительные, так и отрицательные числа.
Беззнаковый тип (unsigned) хранит только неотрицательные числа (ноль и положительные).
За счёт этого максимальное значение у беззнакового типа больше.
*/

int main() {
    char symbol = 'E';
    short number = -5000;
    int bigNumber = -11223344;
    long long veryBigNumber = 999999999;
    unsigned int unsignedNumber = 123456789;
    float numberPi = 3.141592f;
    double doubleNumber = 3.1082008;
    bool brain = true + 100;
    
    std::cout << "char " << symbol << " " << sizeof(symbol) << " " 
              << CHAR_MIN << " " << CHAR_MAX << std::endl;
              
    std::cout << "short " << number << " " << sizeof(number) << " " 
              << SHRT_MIN << " " << SHRT_MAX << std::endl;
              
    std::cout << "int " << bigNumber << " " << sizeof(bigNumber) << " " 
              << INT_MIN << " " << INT_MAX << std::endl;
              
    std::cout << "long_long " << veryBigNumber << " " << sizeof(veryBigNumber) << " " 
              << LLONG_MIN << " " << LLONG_MAX << std::endl;
              
    std::cout << "unsigned_int " << unsignedNumber << " " << sizeof(unsignedNumber) << " " 
              << 0 << " " << UINT_MAX << std::endl;
              
    std::cout << "float " << numberPi << " " << sizeof(numberPi) << " " 
              << -FLT_MAX << " " << FLT_MAX << std::endl;
              
    std::cout << "double " << doubleNumber << " " << sizeof(doubleNumber) << " " 
              << -DBL_MAX << " " << DBL_MAX << std::endl;
              
    std::cout << "bool " << brain << " " << sizeof(brain) << " " 
              << 0 << " " << 1 << std::endl;

    return 0;
}