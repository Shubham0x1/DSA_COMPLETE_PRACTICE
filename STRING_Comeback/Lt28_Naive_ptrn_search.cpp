#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Naive Pattern Search Approach for strStr()
    int strStr(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        // Edge case: if needle (s2) is empty, return 0
        if (n == 0) return 0;

        // Iterate through s1 to find s2
        for (int i = 0; i <= m - n; i++) {
            int j;
            // Check character by character if substring matches
            for (j = 0; j < n; j++) {
                if (s1[i + j] != s2[j]) {
                    break;  // Mismatch found, break inner loop
                }
            }
            if (j == n) {
                // If all characters matched, return starting index i
                return i;
            }
        }

        // If no match found, return -1
        return -1;
    }
};

int main() {
    Solution solution;

    string haystack = "hello";
    string needle = "ll";

    int index = solution.strStr(haystack, needle);
    cout << "Index of needle in haystack: " << index << endl;  // Expected output: 2

    return 0;
}
