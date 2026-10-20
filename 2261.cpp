#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll odd = 0, even = 0;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x % 2 == 0) even++;
            else odd++;
        }
        if ((odd == 1 && even == 1) || (odd == 3 && even == 0))
            cout << "Larpity\n";
        else
            cout << "Moggity\n";
    }
    return 0;
}