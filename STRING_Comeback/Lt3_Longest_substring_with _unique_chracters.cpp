#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Function to find the length of the longest substring without repeating characters
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;                  // Left pointer of sliding window
        int r = 0;                  // Right pointer of sliding window
        int maxlen = 0;             // Stores the maximum length found
        vector<int> hashmap(256, -1);  // Initialize hashmap with -1 for ASCII chars

        while (r < n) {
            // If character has been seen before and is within current window
            if (hashmap[s[r]] != -1 && hashmap[s[r]] >= l) {
                l = hashmap[s[r]] + 1;  // Move left pointer to exclude repeating character
            }

            // Update maximum length
            int len = r - l + 1;
            maxlen = max(len, maxlen);

            // Update the last index of the current character
            hashmap[s[r]] = r;

            // Move right pointer
            r++;
        }

        return maxlen;
    }
};

int main() {
    Solution solution;

    string input = "abcabcbb";
    int result = solution.lengthOfLongestSubstring(input);

    cout << "Length of the longest substring without repeating characters: " << result << endl;  // Expected: 3

    return 0;
}
