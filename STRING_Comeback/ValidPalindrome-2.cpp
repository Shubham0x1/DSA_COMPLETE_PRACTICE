// class Solution {
// public:
//     bool isPalindrome(const string&st, int left, int right){ //brute force approach
//         while(left<right){
//             if(st[left]!=st[right]){
//                 return false;
//             }
//             left++;
//             right--;
//         }
//         return true;
//     }
//     bool validPalindrome(string s) {
//         int n=s.length();
//         for(int i=0;i<n;i++){
//             string modified= s.substr(0,i)+ s.substr(i+1);
//             if(isPalindrome(modified, 0, modified.length()-1)){
//                 return true;
//             }
//         }
//         return isPalindrome(s,0,n-1);
//     }
// };

//Optimal Approach.
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(const string& st, int left, int right) {
        while (left < right) {
            if (st[left] != st[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
        }
        return true;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    Solution sol;
    if (sol.validPalindrome(input)) {
        cout << "Valid palindrome after at most one removal." << endl;
    } else {
        cout << "Not a valid palindrome even after one removal." << endl;
    }

    return 0;
}
