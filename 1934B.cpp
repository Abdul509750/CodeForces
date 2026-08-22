#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

const long long INF = 1e9;

vector<long long> value(32, -1);

int coins[] = {1, 3, 6, 10, 15};

long long solve(int x) {

    if (x < 0)
        return INF;

    if (x == 0)
        return 0;

    // Already calculated?
    if (x <= 31 && value[x] != -1)
        return value[x];

    if (x > 31) {
    int ans = (x - 31 + 14) / 15;
    return solve(x - ans * 15) + ans;
}

    long long best = INF;

    for (auto c : coins) {
        best = min(best, solve(x - c) + 1);
    }

    value[x] = best;

    return best;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Populate DP for 0...31
    for (int i = 0; i <= 31; i++) {
        value[i] = solve(i);
    }

    int t;
    cin >> t;

    while (t--) {

        int number;
        cin >> number;

        cout << solve(number) << '\n';
    }
}