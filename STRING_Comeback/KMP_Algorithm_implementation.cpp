#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
    void computeLPS(string &pat, vector<int> &LPS, int m) {
        int len = 0;
        LPS[0] = 0;
        int i = 1;
        while (i < m) {
            if (pat[i] == pat[len]) {
                len++;
                LPS[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = LPS[len - 1];
                } else {
                    LPS[i] = 0;
                    i++;
                }
            }
        }
    }

    vector<int> search(string &pat, string &txt) {
        int n = txt.length();
        int m = pat.length();
        vector<int> result;
        if (m > n) return result;

        // Step 1: Build LPS array
        vector<int> LPS(m, 0);
        computeLPS(pat, LPS, m);

        // Step 2: Perform KMP search
        int i = 0, j = 0;
        while (i < n) {
            if (txt[i] == pat[j]) {
                i++;
                j++;
            }

            if (j == m) {
                result.push_back(i - m); // 0-based index
                j = LPS[j - 1];          // Continue search for next match
                continue;
            }

            if (i < n && txt[i] != pat[j]) {
                if (j != 0) {
                    j = LPS[j - 1];
                } else {
                    i++;
                }
            }
        }

        return result;
    }
};

// Main function for testing
int main() {
    string txt, pat;
    cout << "Enter text string: ";
    cin >> txt;
    cout << "Enter pattern string: ";
    cin >> pat;

    Solution sol;
    vector<int> indices = sol.search(pat, txt);

    if (indices.empty()) {
        cout << "Pattern not found.\n";
    } else {
        cout << "Pattern found at indices: ";
        for (int idx : indices) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}
