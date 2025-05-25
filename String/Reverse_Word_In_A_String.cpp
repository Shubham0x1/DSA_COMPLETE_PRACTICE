#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();

        // Step 1: Reverse the whole string
        reverse(s.begin(), s.end());

        int i = 0;      // iterator for reading characters
        int r = 0;      // writer index for final result
        int l = 0;      // marks the beginning of a word

        while (i < n) {
            // Step 2: Copy non-space characters (i.e., a word)
            while (i < n && s[i] != ' ') {
                s[r] = s[i];
                i++;
                r++;
            }

            // Step 3: If we copied a word, reverse it in-place
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);
                // Add a space after the word
                s[r] = ' ';
                r++;
                l = r; // Update l to start of next word
            }

            i++; // Skip space
        }

        // Step 4: Remove trailing space
        if (r > 0) r--;
        s = s.substr(0, r); // Trim to only valid part

        return s;
    }
};

// ✅ main function to test the reverseWords
int main() {
    Solution sol;

    string input = "  hello   world  this is   C++ ";
    string result = sol.reverseWords(input);

    cout << "Original: \"" << input << "\"" << endl;
    cout << "Reversed: \"" << result << "\"" << endl;

    return 0;
}
