#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; //affordable
    int k; //usable
    cin>>n>>k;
    int answer = 0;
    int p = 1;
for (int i = 0; i <= 30; i++) {
    int take = min(n / (1 << i), k);
    answer += take;
    n -= take * (1 << i);
}
cout << answer << '\n';
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1; 
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
