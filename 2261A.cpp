#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll findindex(const string& s, bool first) {
    ll index = -1;
    for (ll i = 0; i < (ll)s.size(); i++) {
        if (s[i] == '1') {
            index = i + 1;
            if (first) break;
        }
    }
    return index;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        string input;
        cin >> n >> input;

        ll S = 0, K = 0;                  // S = count of '1', K = count of '0'
        for (char c : input) {
            if (c == '1') S++;
            else K++;
        }

        ll answer = 0;
        if (K == 0) {
            // Souvlakity owns everything: nothing can change
            answer = findindex(input, false) - findindex(input, true);
        } else {
            // S gives away integer a, then K gives back the x that minimizes the range
            for (ll a = 0; a < n; a++) {
                if (input[a] != '1') continue;

                string cur = input;
                cur[a] = '0';

                ll worst = LLONG_MAX;
                for (ll x = 0; x < n; x++) {
                    if (cur[x] != '0') continue;      
                    cur[x] = '1';
                    worst = min(worst, findindex(cur, false) - findindex(cur, true));
                    cur[x] = '0';
                }
                answer = max(answer, worst);
            }
        }
        cout << answer << "\n";
    }
    return 0;
}