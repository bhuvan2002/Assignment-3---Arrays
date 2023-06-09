#include <iostream>
#include <vector>
#include <string>

std::vector<int> plusOne(std::vector<int>& digits) {
    std::string largeIntStr;
    for (int digit : digits) {
        largeIntStr += std::to_string(digit);
    }
    
    // Convert largeIntStr to BigInt
    __int128_t largeInt = 0;
    for (char ch : largeIntStr) {
        largeInt = largeInt * 10 + (ch - '0');
    }
    largeInt++;
    
    // Convert largeInt to string
    std::string resultStr = std::to_string(largeInt);
    
    // Convert each character to integer and store in result vector
    std::vector<int> result;
    for (char ch : resultStr) {
        result.push_back(ch - '0');
    }
    
    return result;
}

void printResult(const std::vector<int>& digits) {
    for (int i = 0; i < digits.size(); i++) {
        std::cout << digits[i];
        if (i != digits.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> digits = { 1, 2, 3 };
    std::vector<int> result = plusOne(digits);
    printResult(result);
    return 0;
}
