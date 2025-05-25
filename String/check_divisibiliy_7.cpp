#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    int isdivisible7(string num) {
        int remainder = 0;
        for (char ch : num) {
            remainder = (remainder * 10 + (ch - '0')) % 7;
        }
        return (remainder == 0) ? 1 : 0;
    }
};

int main() {
    Solution sol;
    string num;
    
    cout << "Enter the number: ";
    cin >> num;

    int result = sol.isdivisible7(num);
    cout << "Output: " << result << endl;

    return 0;
}
