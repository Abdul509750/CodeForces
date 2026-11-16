#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> parent;
vector<ll> sizey;

ll find(ll a){
    if(parent[a] == a){
        return a;
    }

    return parent[a] = find(parent[a]);
}

void unite(ll a, ll b){
    a = find(a);
    b = find(b);

    if(a == b){
        return;
    }

    if(sizey[a] < sizey[b]){
        swap(a, b);
    }

    parent[b] = a;
    sizey[a] += sizey[b];
}

int main(){

    ll t = 0;
    cin >> t;

    while(t--){
        ll n = 0;
        cin >> n;

        // 1-based indexing because permutation values are 1 to n
        vector<ll> input(n + 1);

        for(ll i = 1; i <= n; i++){
            cin >> input[i];
        }

        string s;
        cin >> s;

        // Initialize DSU
        parent.resize(n + 1);
        sizey.resize(n + 1);

        for(ll i = 1; i <= n; i++){
            parent[i] = i;
            sizey[i] = 1;
        }

        // Group elements belonging to the same cycle
        for(ll i = 1; i <= n; i++){
            unite(i, input[i]);
        }

        // Count black elements in each component
        vector<ll> black(n + 1, 0);

        for(ll i = 1; i <= n; i++){
            if(s[i - 1] == '0'){
                black[find(i)]++;
            }
        }

        // Calculate answer for every element
        for(ll i = 1; i <= n; i++){
            cout << black[find(i)] << " ";
        }

        cout << "\n";
    }

    return 0;
}