#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        // Concatenate s1 with itself and check if s2 is a substring of it
        string doubled = s1 + s1;
        return doubled.find(s2) != string::npos;
    }
};

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    Solution sol;
    if (sol.areRotations(str1, str2)) {
        cout << "Yes, the strings are rotations of each other." << endl;
    } else {
        cout << "No, the strings are not rotations of each other." << endl;
    }

    return 0;
}
