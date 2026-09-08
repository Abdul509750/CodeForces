#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<long long, int> dp;

int solve(long long n) {
    // Already divisible by 25
    if (n % 25 == 0) {
        return 0;
    }

    // Cannot remove another digit safely
    if (n < 10) {
        return INT_MAX / 2;
    }

    if (dp.count(n)) {
        return dp[n];
    }
   
        // remove the last and the second last digist and take the min of them
    string digits = to_string(n);
    int size = digits.size();

    string a = digits;
    string b = digits;

    // Remove last digit
    a.erase(size - 1, 1);

    // Remove second-last digit
    b.erase(size - 2, 1);

    long long number1 = stoll(a); //string to long long
    long long number2 = stoll(b);

    return dp[n] = 1 + min(solve(number1),solve(number2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long number;
        cin >> number;

        dp.clear();

        int answer = solve(number);

        if (answer >= INT_MAX / 2) {
            cout << -1 << endl;
        } else {
            cout << answer << endl;
        }
    }

    return 0;
}