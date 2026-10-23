#include <iostream>
#include <cmath>

int main() {
    int n = 0;
    int m = 0;
    std::cout << "n (строки), m (столбцы) = ";
    std::cin >> n >> m;
    
    int matrix[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << "Элемент (" << i << ", " << j << "): ";
            std::cin >> matrix[i][j];
        }
    }

    int columns[100] = {0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (abs(matrix[i][j]) % 10 == 3)
                columns[j] += 1;
        }
    }

    int minNumber = columns[0];
    int columnNumber = 0;
    for (int i = 0; i < m; ++i) {
        if (columns[i] < minNumber) {
            minNumber = columns[i];
            columnNumber = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j != columnNumber)
                matrix[i][j] = -17;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << " "; 
        }
        std::cout << std::endl;
    }
    return 0;
}