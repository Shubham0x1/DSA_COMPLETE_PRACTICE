#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string generate(string& word) {
        int arr[26] = {0};
        for (char& ch : word) {
            arr[ch - 'a']++;
        }
        string new_word = "";
        for (int i = 0; i < 26; i++) {
            int freq = arr[i];
            if (freq > 0) {
                new_word += string(1, i + 'a') + to_string(freq);
            }
        }
        return new_word;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;
        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            string new_word = generate(word);
            mp[new_word].push_back(word);
        }
        for (auto& it : mp) {
            result.push_back(it.second);
        }
        return result;
    }
};

int main() {
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution sol;
    vector<vector<string>> result = sol.groupAnagrams(input);

    cout << "Grouped Anagrams:\n";
    for (auto& group : result) {
        cout << "[ ";
        for (auto& word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}

// With using sorting method and inbuilt function.
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         int n=strs.size();
//         vector<vector<string>> result;
//         unordered_map<string, vector<string>> mp;
//         for(int i=0;i<n;i++){
//             string temp=strs[i];
//             sort(begin(temp),end(temp));
//             mp[temp].push_back(strs[i]);
//         }
//         for(auto it:mp){
//                 result.push_back(it.second);
//         }
//         return result;
//     }
// };