#include <bits/stdc++.h>
using namespace std;

char nonRepeatingChar(string &s) {
    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char ch : s) {
        freq[ch]++;
    }

    // Find the first character with frequency 1
    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] == 1) {
            return s[i];
        }
    }

    return '$'; // Indicates no non-repeating character
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    char result = nonRepeatingChar(input);
    if (result != '$') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}
