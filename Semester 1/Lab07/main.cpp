#include <iostream>
#include "func.hpp"

using namespace lab07;

int main() {
    int n = 0;
    int matrix[NMax][NMax];
    Read(matrix, n);

    if (checkConditions(matrix, n)) {
        sortRows(matrix, n);
    }

    std::cout << "Результат:" << std::endl;
    Write(matrix, n);

    return 0;
}