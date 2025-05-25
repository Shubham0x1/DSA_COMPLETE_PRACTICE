#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0, j = 0;

    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;  // move s pointer if match found
        }
        j++;      // always move t pointer
    }

    return i == s.length(); // if all characters of s were found in t
}

int main() {
    string s = "abc";
    string t = "ahbgdc";

    if (isSubsequence(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
