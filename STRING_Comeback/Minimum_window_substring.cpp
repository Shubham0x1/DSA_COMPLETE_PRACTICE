#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        if (t.length() > n) return "";

        unordered_map<char, int> mp;
        // Store frequency of each character in t
        for (char &ch : t) {
            mp[ch]++;
        }

        int requiredCount = t.length();
        int minwindowsize = INT_MAX;
        int start_i = 0;
        int i = 0, j = 0;

        // Sliding window starts
        while (j < n) {
            char ch = s[j];
            if (mp[ch] > 0) {
                requiredCount--;
            }
            mp[ch]--;

            // Shrink the window from the left
            while (requiredCount == 0) {
                int currwindowsize = j - i + 1;
                if (minwindowsize > currwindowsize) {
                    minwindowsize = currwindowsize;
                    start_i = i;
                }

                mp[s[i]]++;
                if (mp[s[i]] > 0) {
                    requiredCount++;
                }
                i++;
            }
            j++;
        }

        return minwindowsize == INT_MAX ? "" : s.substr(start_i, minwindowsize);
    }
};

// Main function to test
int main() {
    Solution sol;

    string s = "ADOBECODEBANC";
    string t = "ABC";

    string result = sol.minWindow(s, t);
    cout << "Minimum window substring: " << result << endl;

    return 0;
}
