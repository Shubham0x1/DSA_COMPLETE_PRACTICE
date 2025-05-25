#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        int n = arr.size();
        if (n == 0) return "";

        // Sort the array
        sort(arr.begin(), arr.end());

        string ans = "";
        string start = arr[0];
        string end = arr[n - 1];
        int i = 0;

        // Compare characters of first and last string in sorted array
        while (i < start.length() && i < end.length()) {
            if (start[i] == end[i]) {
                ans += start[i];
                i++;
            } else {
                break;
            }
        }

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> arr(n);
    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    string prefix = sol.longestCommonPrefix(arr);

    if (prefix.empty()) {
        cout << "No common prefix found." << endl;
    } else {
        cout << "Longest Common Prefix: " << prefix << endl;
    }

    return 0;
}
