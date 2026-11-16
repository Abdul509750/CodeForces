
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr ll mx = LLONG_MAX;

struct edge {
    ll neighbour;
    ll weight;
};

vector<vector<edge>> graph;

vector<ll> findmincost(ll source, ll destination, ll n) {

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;

    vector<ll> dist(n + 1, mx);
    vector<ll> parent(n + 1, -1);

    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {

        auto [weight, identifier] = pq.top();
        pq.pop();

        if (weight > dist[identifier])
            continue;

        for (auto& e : graph[identifier]) {

            ll v = e.neighbour;

            if (weight + e.weight < dist[v]) {

                dist[v] = weight + e.weight;
                parent[v] = identifier;

                pq.push({dist[v], v});
            }
        }
    }
      // not reacheable
    if (dist[destination] == mx)
        return {};

    vector<ll> path;

    ll current = destination;

    while (current != -1) {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());

    return path;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    graph.resize(n + 1);

    for (ll i = 0; i < m; i++) {

        ll u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    vector<ll> path = findmincost(1, n, n);

    if (path.empty()) {
        cout << -1 << '\n';
    }
    else {
        for (auto node : path) {
            cout << node << " ";
        }
        cout << '\n';
    }

    return 0;
}
