#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        for (int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) { //num[i]-'0' is used to convert string to int.
                return num.substr(0, i + 1);//i+1 as substr use one lesser. 
            }
        }
        return "";
    }
};

int main() {
    Solution sol;
    string input = "354270";
    cout << "Input: " << input << endl;
    cout << "Largest odd number: " << sol.largestOddNumber(input) << endl;
    return 0;
}
