#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        int n = s.length();
        string ans = "";

        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end());

        // Step 2: Extract and reverse individual words
        for (int i = 0; i < n; i++) {
            string word = "";

            // Skip spaces
            while (i < n && s[i] == ' ') i++;

            // Collect characters of the word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the word to get correct spelling
            reverse(word.begin(), word.end());

            // Add to answer with a space in front
            if (!word.empty()) {
                ans += " " + word;
            }
        }

        // Step 3: Remove leading space and return
        return ans.substr(1);  // removes the extra space at the start
    }
};

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);  // Input the full line with spaces

    Solution sol;
    string result = sol.reverseWords(input);

    cout << "Reversed words: " << result << endl;

    return 0;
}
