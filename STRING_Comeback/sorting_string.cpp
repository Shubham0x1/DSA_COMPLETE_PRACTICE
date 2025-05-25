#include <iostream>
#include <string>
using namespace std;

// Custom sort function using Counting Sort logic
string sort(string s) {
    int freq[26] = {0};
    
    // Count frequency of each character
    for(char ch : s) {
        freq[ch - 'a']++;
    }

    // Build the sorted string
    string result = "";
    for(int i = 0; i < 26; i++) {
        result += string(freq[i], 'a' + i);
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a lowercase string: ";
    cin >> input;

    string sortedStr = sort(input);

    cout << "Sorted string: " << sortedStr << endl;

    return 0;
}
