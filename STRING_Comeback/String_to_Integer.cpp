#include <iostream>
#include <string>
#include <climits>

int myAtoi(std::string s) {
    int i = 0, n = s.size();
    
    // 1. Skip leading whitespace
    while (i < n && s[i] == ' ') i++;
    
    // 2. Check for sign
    int sign = 1;
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }
    
    // 3. Parse digits
    long long result = 0; // use long long to detect overflow
    while (i < n && isdigit(s[i])) {
        int digit = s[i] - '0';
        result = result * 10 + digit;
        
        // 4. Check overflow and clamp
        if (sign == 1 && result > INT_MAX) return INT_MAX;
        if (sign == -1 && -result < INT_MIN) return INT_MIN;
        
        i++;
    }
    
    return (int)(sign * result);
}

int main() {
    std::string s;
    std::cout << "Enter string: ";
    std::getline(std::cin, s);
    int val = myAtoi(s);
    std::cout << "Converted integer: " << val << std::endl;
    return 0;
}
