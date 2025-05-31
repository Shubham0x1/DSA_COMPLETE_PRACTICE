#include <iostream>
#include <vector>
using namespace std;

string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") return "0";

    int m = num1.size(), n = num2.size();
    vector<int> result(m + n, 0);

    // Reverse iteration from back
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int mul = (num1[i]-'0') * (num2[j]-'0');
            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10; // current position
            result[i + j] += sum / 10;    // carry to next position
        }
    }

    // Build string from result vector
    string res = "";
    for (int num : result) {
        if (!(res.empty() && num == 0)) // skip leading zeros
            res += to_string(num);
    }
    return res.empty() ? "0" : res;
}

int main() {
    string num1 = "123";
    string num2 = "456";
    cout << "Product: " << multiply(num1, num2) << endl;
    return 0;
}
