// #include <iostream>
// #include <unordered_map>
// using namespace std;

// class Solution {
// public:
//     int romanToInt(string s) {
//         unordered_map<char, int> roman = {
//             {'I', 1}, {'V', 5}, {'X', 10},
//             {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
//         };

//         int total = 0;
//         int prev = 0;

//         for (int i = s.length() - 1; i >= 0; i--) {
//             int curr = roman[s[i]];
//             if (curr < prev)
//                 total -= curr;
//             else
//                 total += curr;
//             prev = curr;
//         }

//         return total;
//     }
// };

// int main() {
//     Solution sol;
//     string roman;
    
//     cout << "Enter Roman numeral : ";
//     cin >> roman;

//     int result = sol.romanToInt(roman);
//     cout << "Integer value: " << result << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToDecimal(string &s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            int value = roman[s[i]];
            if (i + 1 < s.length() && value < roman[s[i + 1]]) {
                result += roman[s[i + 1]] - value;
                i++; // Skip the next character
            } else {
                result += value;
            }
        }

        return result;
    }
};

int main() {
    string roman;
    cout << "Enter Roman numeral: ";
    cin >> roman;

    Solution sol;
    int decimalValue = sol.romanToDecimal(roman);

    cout << "Decimal (Integer) value: " << decimalValue << endl;

    return 0;
}
