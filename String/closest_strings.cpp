#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <cmath>
using namespace std;

class Solution {
  public:
    int shortestDistance(vector<string> &s, string word1, string word2) {
        int d1 = -1, d2 = -1;
        int ans = INT_MAX;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == word1)
                d1 = i;
            if (s[i] == word2)
                d2 = i;
            if (d1 != -1 && d2 != -1)
                ans = min(ans, abs(d1 - d2));
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<string> S = {"the", "quick", "brown", "fox", "quick"};
    string word1 = "the";
    string word2 = "fox";

    // Call the function
    int result = sol.shortestDistance(S, word1, word2);

    // Output the result
    cout << "Minimum Distance: " << result << endl;

    return 0;
}
