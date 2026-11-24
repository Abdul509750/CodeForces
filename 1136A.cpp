
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll damage(ll m) {
    ll y = (2 * m + 3) / 6;

    ll ans = 0;

    for (ll i = max(1LL, y - 2); i <= y + 2; i++) {
        ll x = m - i;

        if (x < 0) continue;

        ll d = i * (2 * x - i + 3) / 2;
        ans = max(ans, d);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll h;
        cin >> h;

        ll l = 1, r = 2 * h;
        ll ans = r;

        while (l <= r) {
            ll mid = l + (r - l) / 2;

            if (damage(mid) >= h) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }
}
