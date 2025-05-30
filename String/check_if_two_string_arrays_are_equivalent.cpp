#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";
        for (int i = 0; i < word1.size(); i++) {
            s1 += word1[i];
        }
        for (int j = 0; j < word2.size(); j++) {
            s2 += word2[j];
        }
        return s1 == s2;
    }
};

int main() {
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};
    
    Solution sol;
    if (sol.arrayStringsAreEqual(word1, word2)) {
        cout << "The arrays represent the same string." << endl;
    } else {
        cout << "The arrays do NOT represent the same string." << endl;
    }

    return 0;
}
// better approach just using pointers 4 for iteration.
