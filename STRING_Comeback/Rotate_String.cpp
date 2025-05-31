#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) return false;

    string combined = s + s;
    int n = goal.length();

    for (int i = 0; i <= combined.length() - n; ++i) {
        string window = combined.substr(i, n);
        if (window == goal) return true;
    }

    return false;
}

int main() {
    string s = "abcde";
    string goal = "cdeab";

    if (rotateString(s, goal)) {
        cout << "True - '" << goal << "' is a rotation of '" << s << "'" << endl;
    } else {
        cout << "False - '" << goal << "' is NOT a rotation of '" << s << "'" << endl;
    }

    return 0;
}
