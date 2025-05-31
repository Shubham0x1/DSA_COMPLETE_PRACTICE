#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int i = 0;
        while (i < chars.size()) {
            char current_element = chars[i];  // Fixed: should be char, not int
            int count = 0;

            while (i < chars.size() && chars[i] == current_element) {
                i++;
                count++;
            }

            chars[index++] = current_element;

            if (count > 1) {
                string add = to_string(count);
                for (char ch : add) {
                    chars[index++] = ch;
                }
            }
        }
        return index;
    }
};

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    Solution sol;
    int compressedLength = sol.compress(chars);

    cout << "Compressed Length: " << compressedLength << endl;
    cout << "Compressed Array: ";
    for (int i = 0; i < compressedLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}
