#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll manhattan(ll x1, ll y1, ll x2, ll y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

void solve(){
    ll n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<pair<ll,ll>> cities(n + 1);

    for(ll i = 1; i <= n; i++){
        cin >> cities[i].first >> cities[i].second;
    }

    ll ans = manhattan(
        cities[a].first, cities[a].second,
        cities[b].first, cities[b].second
    );

    const ll INF = LLONG_MAX / 4;

    ll fromA = INF;
    ll fromB = INF;

    for(ll i = 1; i <= k; i++){

        fromA = min(fromA, manhattan(
            cities[a].first, cities[a].second,
            cities[i].first, cities[i].second
        ));

        fromB = min(fromB, manhattan(
            cities[b].first, cities[b].second,
            cities[i].first, cities[i].second
        ));
    }

    ans = min(ans, fromA + fromB);

    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}