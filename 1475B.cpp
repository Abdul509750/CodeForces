#include <iostream>
#include <vector>
using namespace std;

bool solve(int number, int sum, vector<int>& memo) {

    if (sum == number)
        return true;

    if (sum > number)
        return false;

    if (memo[sum] != -1)
        return memo[sum];

    bool right = solve(number, sum + 2020, memo);
    bool left  = solve(number, sum + 2021, memo);

    return memo[sum] = (right || left);
}

int main() {
    int t;
    cin >> t;

    while (t--) {

        int number;
        cin >> number;

        vector<int> memo(number + 1, -1);

        if (solve(number, 0, memo))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}