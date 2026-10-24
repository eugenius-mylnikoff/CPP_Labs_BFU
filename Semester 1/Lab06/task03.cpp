#include <iostream>
#include <cmath>
#include <climits>

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

    int minNumber = INT_MAX;
    int columnNumber = 0;
    for (int j = 0; j < m; ++j) {
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (abs(matrix[i][j]) % 10 == 3)
                count += 1;
        }
        if (count < minNumber) {
            minNumber = count;
            columnNumber = j;
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