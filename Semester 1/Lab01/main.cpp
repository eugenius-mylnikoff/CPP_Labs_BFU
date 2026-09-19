#include <iostream>
#include <climits>
#include <cfloat>

int main() {
    char symbol = 'M';
    short number = -5555;
    int bigNumber = -123456789;
    long long veryBigNumber = 999999999;
    unsigned int unsignedNumber = 987654321;
    float numberPi = 3.141592f;
    double doubleNumber = 3.1082008;
    bool brain = true;
    
    std::cout << "char " << symbol << " " << sizeof(symbol) << " " 
              << CHAR_MIN << " " << CHAR_MAX << "\n";
              
    std::cout << "short " << number << " " << sizeof(number) << " " 
              << SHRT_MIN << " " << SHRT_MAX << "\n";
              
    std::cout << "int " << bigNumber << " " << sizeof(bigNumber) << " " 
              << INT_MIN << " " << INT_MAX << "\n";
              
    std::cout << "long_long " << veryBigNumber << " " << sizeof(veryBigNumber) << " " 
              << LLONG_MIN << " " << LLONG_MAX << "\n";
              
    std::cout << "unsigned_int " << unsignedNumber << " " << sizeof(unsignedNumber) << " " 
              << 0 << " " << UINT_MAX << "\n";
              
    std::cout << "float " << numberPi << " " << sizeof(numberPi) << " " 
              << -FLT_MAX << " " << FLT_MAX << "\n";
              
    std::cout << "double " << doubleNumber << " " << sizeof(doubleNumber) << " " 
              << -DBL_MAX << " " << DBL_MAX << "\n";
              
    std::cout << "bool " << brain << " " << sizeof(brain) << " " 
              << 0 << " " << 1 << "\n";

    return 0;
}