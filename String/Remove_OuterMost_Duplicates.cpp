#include <iostream>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";  // This will hold the final result
        int depth = 0;       // This tracks how deep we are in nested parentheses

        for (char ch : s) {
            if (ch == '(') {
                if (depth > 0) {
                    result += ch;  // Only add if it's not the outermost '('
                }
                depth++;  // Increase depth as we go into a new '('
            } else if (ch == ')') {
                depth--;  // Close the current parenthesis
                if (depth > 0) {
                    result += ch;  // Only add if it's not the outermost ')'
                }
            }
        }

        return result;
    }
};

// main function to test the code
int main() {
    Solution sol;

    string s = "(()())(())(()(()))";
    string result = sol.removeOuterParentheses(s);

    cout << "Input: " << s << endl;
    cout << "Output: " << result << endl;

    return 0;
}
