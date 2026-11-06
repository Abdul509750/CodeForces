
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

using ll = long long;

ll lc(ll i) {
    return 2 * i + 1;
}

ll rc(ll i) {
    return 2 * i + 2;
}

ll parent(ll i) {
    return (i - 1) / 2;
}

vector<char> bt;
vector<ll> sz;
vector<bool> same;
vector<char> result;

void calc(ll i) {
    if (i >= bt.size()) return;

    sz[i] = 1;
    same[i] = true;

    if (lc(i) < bt.size()) {
        calc(lc(i));
        sz[i] += sz[lc(i)];

        if (!same[lc(i)] || bt[lc(i)] != bt[i])
            same[i] = false;
    }

    if (rc(i) < bt.size()) {
        calc(rc(i));
        sz[i] += sz[rc(i)];

        if (!same[rc(i)] || bt[rc(i)] != bt[i])
            same[i] = false;
    }
}

void preorder(ll i) {
    if (i >= bt.size()) return;

    if (sz[i] >= 3 && same[i])
        return;

    result.push_back(bt[i]);

    preorder(lc(i));
    preorder(rc(i));
}

int main() {
    ll t;
    cin >> t;

    string s = bitset<32>(t).to_string();

    ll pos = s.find('1');
    s = s.substr(pos);

    bt = vector<char>(s.begin(), s.end());

    sz.resize(bt.size());
    same.resize(bt.size());

    calc(0);
    preorder(0);

    ll num = 0;

    for (int i = 0; i < result.size(); i++) {
        num = num * 2 + (result[i] - '0');
    }

    cout << num << '\n';

    return 0;
}
