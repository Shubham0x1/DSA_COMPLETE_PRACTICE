// Approach1-Using basic sorting approach.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if (n < m || m < n) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == t[i]) {
                flag = true;
            } else {
                flag = false;
                break;
            }
        }
        return flag;
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (sol.isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}

//Approach-2: Optimized Approach don't use bool flag variable just. return s==t; it will
// give the right answer.
class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length()) return false;
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            return s == t;
        }
    };

//Approach-3: Using hashmap of frequency count. 
class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length()) return false;
    
            int freq[26] = {0}; // for lowercase English letters
    
            for (char c : s) freq[c - 'a']++;
            for (char c : t) freq[c - 'a']--;
    
            for (int i = 0; i < 26; ++i) {
                if (freq[i] != 0) return false;
            }
            return true;
        }
    };
//Using unordered map as well similarly for all consonant vowel lower upper etc.