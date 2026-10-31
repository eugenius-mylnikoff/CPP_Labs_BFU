#include "func.hpp"
#include <iostream>
#include <cmath>
#include <utility>

namespace lab07 {
    void Read(int matrix[NMax][NMax], int &n) {
        std::cout << "n = ";
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << "Элемент (" << i << ", " << j << "): ";
                std::cin >> matrix[i][j];
            }
        }
    }

    void Write(int matrix[NMax][NMax], int n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    bool isPrime(int x) {
        if (x < 2) return false;
        for (int i = 2; i * i <= x; ++i) {
            if (x % i == 0) return false;
        }
        return true;
    }

    bool checkConditions(int matrix[NMax][NMax], int n) {
        for (int j = 0; j < n; ++j) {
            int summa = 0;
            bool prime = false;
            for (int i = 0; i < n; ++i) {
                summa += matrix[i][j];
                if (!prime) {
                    if (isPrime(matrix[i][j])) prime = true;
                }
            }
            if (summa == 0 && !prime) {
                return true;
            }
        }
        return false;
    }

    void sortRows(int matrix[NMax][NMax], int n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if (abs(matrix[i][k]) < abs(matrix[i][j])) {
                        std::swap(matrix[i][j], matrix[i][k]);
                    }
                }
            }
        }
    }
}