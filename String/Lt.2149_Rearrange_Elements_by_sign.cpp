#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos; // for positive elements
        vector<int> neg; // for negative elements
        vector<int> result;

        // Split positive and negative numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        // Merge alternately: positive then negative
        int i = 0, j = 0;
        while (i < pos.size() && j < neg.size()) {
            result.push_back(pos[i++]);
            result.push_back(neg[j++]);
        }

        return result;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers (equal number of +ve and -ve): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    vector<int> rearranged = sol.rearrangeArray(nums);

    cout << "Rearranged Array: ";
    for (int num : rearranged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
