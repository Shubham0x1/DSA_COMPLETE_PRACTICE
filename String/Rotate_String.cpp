#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        string doubled = s + s;
        return doubled.find(goal) != string::npos;
    }
};

int main() {
    Solution sol;
    string s, goal;

    cout << "Enter original string: ";
    cin >> s;
    cout << "Enter goal string: ";
    cin >> goal;

    if (sol.rotateString(s, goal)) {
        cout << "True: Goal is a rotation of the string." << endl;
    } else {
        cout << "False: Goal is not a rotation." << endl;
    }

    return 0;
}
