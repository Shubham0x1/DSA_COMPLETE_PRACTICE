#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPangram(string str) {
    int freq[26] = {0};  // Initialize all to 0

    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);              // Convert to lowercase
            freq[ch - 'a'] = 1;            // Mark the character as present
        }
    }

    // Check if all elements are 1
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0)
            return false;  // Missing at least one alphabet
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPangram(input))
        cout << "The string is a pangram." << endl;
    else
        cout << "The string is not a pangram." << endl;

    return 0;
}
