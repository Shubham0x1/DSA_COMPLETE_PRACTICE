#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Convert decimal number to hexadecimal string
    string toHex(int num){
        if (num == 0) return "0";
        string hex = "";
        while(num > 0){
            int rem = num % 16;
            char digit = (rem < 10) ? (rem + '0') : (rem - 10 + 'a');
            hex = hex + digit;
            num = num / 16;
        }
        return hex;
    }

    // Encrypt the input string
    string encryptString(string S) {
        int n = S.size();
        string result = "";
        for(int i = 0; i < n; ){
            int count = 0;
            char current = S[i];
            while(i < n && current == S[i]){
                count++;
                i++;
            }
            result += current;
            result += toHex(count);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

// Main function to run the code
int main() {
    Solution sol;

    string input;
    cout << "Enter the string: ";
    cin >> input;

    string encrypted = sol.encryptString(input);
    cout << "Encrypted string: " << encrypted << endl;

    return 0;
}
