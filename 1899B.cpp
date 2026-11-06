
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n = 0;
        cin >> n;

        vector<ll> input(n);

        for (auto& number : input) {
            cin >> number;
        }

        if (n == 1 || n == 0) {
            cout << 0 << "\n";
        } else {
            ll difference = -1;
            vector<ll> prefix(n + 1, 0);

            // Calculate the prefix sum
            for (int i = 0; i < n; i++) {
      // R ----->>>>         prefix[i + 1] = prefix[i] + input[i];
            }

            ll max = *max_element(input.begin(), input.end());
            ll min = *min_element(input.begin(), input.end());

            difference = max - min;

            for (ll i = 2; i <= n; i++) {
                int k = i;
                if(n % k != 0) continue;
                max = LLONG_MIN;
                min = LLONG_MAX;
                for (ll j = 0; j < n; j += k) {
        // --->> accessing the sum            ll sum = prefix[(j + k)] - prefix[j];
              ll sum =  prefix[(j + k)] - prefix[j];
                    if (sum > max) {
                        max = sum;
                    }

                    if (sum < min) {
                        min = sum;
                    }
                }

                difference = std::max(difference, max - min);
            }

            cout << difference << "\n";
        }
    }

    return 0;
}
