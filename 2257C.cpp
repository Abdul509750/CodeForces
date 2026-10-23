#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n = 0;
    cin>>n;
    vector<ll> parents(n - 1);
  for(auto& input : parents){
       cin>>input;
  }
    ll m;
    cin>>m;
    vector<ll> beavours(m);
    for(auto& input: beavours){
        cin>>input;
    }
    // number of cameras to beplaced
    cout<< m - 1<< " ";
    sort(beavours.begin() , beavours.end());
    for(int i = 1; i < m; i++){
            cout<<beavours[i]<<" ";
    }
    cout<<"\n";
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t;
cin>>t;
while(t--){
    solve();
}
    
    return 0;
}