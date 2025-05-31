#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    // Helper function to check if two strings are anagrams
    bool isAnagram(string a, string b) {
        if (a.length() != b.length()) return false;

        vector<int> freq(26, 0);  // For lowercase letters

        for (int i = 0; i < a.length(); i++) {
            freq[a[i] - 'a']++;   // Increase count for a
            freq[b[i] - 'a']--;   // Decrease count for b
        }

        // If all frequencies cancel out to 0, it's an anagram
        for (int count : freq) {
            if (count != 0) return false;
        }

        return true;
    }

    // Main function to find all starting indices of anagrams of p in s
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int windowSize = p.length();
        int n = s.length();

        // Loop through all windows of size p in s
        for (int i = 0; i <= n - windowSize; i++) {
            string window = s.substr(i, windowSize);  // current substring of size p

            if (isAnagram(window, p)) {
                result.push_back(i);  // valid anagram starting index
            }
        }

        return result;
    }
};

int main() {
    Solution solution;

    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = solution.findAnagrams(s, p);

    cout << "Starting indices of anagrams of '" << p << "' in '" << s << "': ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
