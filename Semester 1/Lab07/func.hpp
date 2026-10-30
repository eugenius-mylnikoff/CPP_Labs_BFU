#pragma once

namespace lab07 {
    constexpr int NMax = 100;

    void Read(int matrix[NMax][NMax], int& n);
    void Write(int matrix[NMax][NMax], int n);

    bool isPrime(int number);
    bool checkConditions(int matrix[NMax][NMax], int n);
    void sortRows(int matrix[NMax][NMax], int n);
}