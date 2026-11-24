#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t = 0;
    cin>>t;

    while(t--){
        ll  x , y;
        cin>>x>>y;
          ll dx[] = {-x, -x, -y, -y, y, y, x, x};
          ll dy[] = {-y, y, -x, x, -x, x, -y, y};
          // only start from the x-rows+  or x-rows-- no need to brute force whole board
          // start from min(k or q) to max(k or q)
          ll kx , ky = 0;
          ll qx , qy = 0;
          cin>>kx>>ky;
          cin>>qx>>qy;
          ll answer = 0;
         // we only check relative to the king's
         set<pair<ll,ll>> candidates;

    for(ll k = 0; k < 8; k++){
        candidates.insert({kx + dx[k], ky + dy[k]});
    }

    for(auto currentpos : candidates){
        bool queenattacked = false;

        for(ll i = 0; i < 8; i++){
            if(currentpos.first + dx[i] == qx &&
            currentpos.second + dy[i] == qy){
                queenattacked = true;
            }
        }

        if(queenattacked) answer++;
    }
    cout<<answer<<"\n";
}
return 0;
}