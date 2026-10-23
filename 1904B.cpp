#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;

unordered_map<ll, ll> dp;
unordered_map<ll, ll> result;

ll solve(vector<ll>& out, ll indexy) {
    ll k = indexy;

    while (k + 1 < out.size() && dp[indexy] >= out[k + 1]) {
        k++;
    }

    return k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        dp.clear();
        result.clear();

        ll n;
        cin >> n;

        vector<ll> input(n), copy;

        for (auto& number : input) {
            cin >> number;
            copy.push_back(number);
        }

        sort(copy.begin(), copy.end());

        dp[0] = copy[0];

        for (ll i = 1; i < n; i++) {
            dp[i] = dp[i - 1] + copy[i];
        }

        result[n - 1] = n - 1;

        for (ll i = n - 2; i >= 0; i--) {
            if (dp[i] >= copy[i + 1]) {
                result[i] = result[i + 1];
            } else {
                result[i] = i;
            }
        }

        for (ll i = 0; i < n; i++) {
            ll idx = lower_bound(copy.begin(), copy.end(), input[i]) - copy.begin();
            cout << result[idx] << " ";
        }

        cout << '\n';
    }

    return 0;
}
