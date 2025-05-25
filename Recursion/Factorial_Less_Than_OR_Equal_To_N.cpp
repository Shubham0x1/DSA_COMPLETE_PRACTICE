#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long>result;
        long long fact=1;
        int i=1;
        while(fact<=n){
            result.push_back(fact);
            i++;
            fact=fact*i;
        }
        return result;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
