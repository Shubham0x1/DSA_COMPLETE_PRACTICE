#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // For sort()
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Sort the strings lexicographically
        sort(strs.begin(), strs.end());

        // Compare the first and last string in the sorted array
        string first = strs[0];
        string last = strs[strs.size() - 1];
        
        int i = 0;
        // Compare characters one by one
        while (i < first.length() && i < last.length() && first[i] == last[i]) {
            i++;
        }

        // The common prefix is from the beginning to the point where they stop matching
        return first.substr(0, i);
    }
};

int main() {
    Solution sol;

    // Test cases
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};

    cout << "Longest Common Prefix (Test Case 1): " << sol.longestCommonPrefix(strs1) << endl;
    cout << "Longest Common Prefix (Test Case 2): " << sol.longestCommonPrefix(strs2) << endl;

    return 0;
}
