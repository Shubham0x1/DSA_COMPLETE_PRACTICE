#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Recursive Approach to generate the nth term of the Count and Say sequence
    string countAndSay(int n) {
        // Base case: The first term is "1"
        if (n == 1) {
            return "1";
        }

        // Get the (n-1)th term by recursive call
        string say = countAndSay(n - 1);
        string result = "";

        // Process the say string to build the nth term
        for (int i = 0; i < say.length(); i++) {
            int count = 1;
            char ch = say[i];

            // Count consecutive identical digits
            while (i < say.length() - 1 && say[i] == say[i + 1]) {
                count++;
                i++;
            }

            // Append the count and the digit to result
            result += to_string(count) + string(1, ch);
        }

        return result;
    }
};

int main() {
    Solution solution;

    int n = 5;
    string result = solution.countAndSay(n);

    cout << "The " << n << "th term of the Count and Say sequence is: " << result << endl;
    // Expected output: "111221"

    return 0;
}
