#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, char> mapST;
    unordered_map<char, char> mapTS;

    for (int i = 0; i < s.length(); i++) {
        char c1 = s[i];
        char c2 = t[i];

        // Check mapping from s to t
        if (mapST.count(c1)) {
            if (mapST[c1] != c2) return false;
        } else {
            mapST[c1] = c2;
        }

        // Check mapping from t to s
        if (mapTS.count(c2)) {
            if (mapTS[c2] != c1) return false;
        } else {
            mapTS[c2] = c1;
        }
    }

    return true;
}

int main() {
    cout << boolalpha;  // to print "true"/"false" instead of "1"/"0"

    string s1 = "egg", t1 = "add";
    string s2 = "foo", t2 = "bar";
    string s3 = "paper", t3 = "title";

    cout << "Is \"" << s1 << "\" isomorphic to \"" << t1 << "\"? " << isIsomorphic(s1, t1) << endl;
    cout << "Is \"" << s2 << "\" isomorphic to \"" << t2 << "\"? " << isIsomorphic(s2, t2) << endl;
    cout << "Is \"" << s3 << "\" isomorphic to \"" << t3 << "\"? " << isIsomorphic(s3, t3) << endl;

    return 0;
}
