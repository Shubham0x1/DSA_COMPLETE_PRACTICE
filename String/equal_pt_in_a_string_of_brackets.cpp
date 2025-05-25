#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int findIndex(string& str) {
        int l = 0;
        int r = str.size() - 1;
        while (l <= r) {
            if (str[l] != '(') {
                l++;
            } else if (str[r] != ')') {
                r--;
            } else {
                l++;
                r--;
            }
        }
        return l;
    }
};

int main() {
    string input;
    cout << "Enter a string of parentheses: ";
    cin >> input;

    Solution sol;
    int result = sol.findIndex(input);

    cout << "The index where imbalance starts (or count of matched pairs * 2): " << result << endl;

    return 0;
}
