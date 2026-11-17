#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll solve(const vector<ll>& sizes, ll c, ll start, ll end, ll n){

    if(start > end){
        return -1;
    }

    ll mid = start + (end - start) / 2;

    ll sumy = 0;

    for(int i = 0; i < n; i++){
        ll x = sizes[i] + (2 * mid);
        sumy += x * x;

        if(sumy > c) break;
    }

    if(sumy == c){
        return mid;
    }

    if(sumy < c){
        return solve(sizes, c, mid + 1, end, n);
    }

    if(sumy > c){
        return solve(sizes, c, start, mid - 1, n);
    }

    return -1;
}

int main(){

    ll t;
    cin >> t;

    while(t--){
        ll n, c;
        cin >> n >> c;

        vector<ll> sizes(n);

        for(auto& num : sizes){
            cin >> num;
        }

        cout << solve(sizes, c, 0, 1e9, n) << '\n';
    }

    return 0;
}