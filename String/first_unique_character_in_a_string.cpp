#include<bits/stdc++.h>
using namespace std;
//this is brute approach as we check for all element for each element.
//better approach is using frequency array.
// vector<int>freq(26,0); //for only small letters.
// for(char ch:s){
//     freq[ch-'a']++; // -'a' convert a lowercase letter to an index between 0 and 25.
//     // This avoids using a map or unordered_map, and is faster and 
//     // more memory-efficient for fixed-size alphabets like lowercase letters.
//     // if both present then convert the letter using tolower.first for efficient indexing.
// }
// for(int i=0;i<s.length();i++){
//     if(freq[s[i]-'a']==1){
//         return i;
//     }
// }
// return -1;
int firstUniqChar(string s) {
    for (int i = 0; i < s.length(); i++) {
        bool isUnique = true;
        for (int j = 0; j < s.length(); j++) {
            if (i != j && s[i] == s[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            return i;
        }
    }
    return -1;
}

int main() {
    string input = "leetcode";
    int index = firstUniqChar(input);

    if (index != -1)
        cout << "First non-repeating character is '" << input[index] << "' at index " << index << endl;
    else
        cout << "No unique character found." << endl;

    return 0;
}
