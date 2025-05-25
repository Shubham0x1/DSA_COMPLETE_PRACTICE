#include <iostream>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    // Recursive function to check if a substring is a palindrome
    bool palindrome(string& s, int i, int j) {
        if (i >= j) return true;                 // Base case: single or no character is always a palindrome
        if (s[i] == s[j]) {
            return palindrome(s, i + 1, j - 1);   // Check inner substring
        }
        return false;                            // Characters at ends don't match
    }

    // Brute-force approach to find the longest palindromic substring
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = INT_MIN;    // Maximum length of palindrome found
        int sp = 0;              // Starting position of the longest palindrome

        // Try all possible substrings
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (palindrome(s, i, j) == true) {       // If s[i..j] is a palindrome
                    if (j - i + 1 > maxlen) {            // Check if it's longer than the previously found
                        maxlen = j - i + 1;
                        sp = i;
                    }
                }
            }
        }

        // Return the longest palindromic substring
        return s.substr(sp, maxlen);
    }
};

int main() {
    Solution solution;

    string input = "babad";
    string result = solution.longestPalindrome(input);

    cout << "Longest palindromic substring: " << result << endl;
    // Expected output: "bab" or "aba"

    return 0;
}
