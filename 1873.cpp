#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
using ll = long long;
bool feasibility(vector<ll>a , ll temheight , ll w){
    ll water = 0;
    for(int i = 0; i < a.size(); i++){
         water += max(temheight - a[i] , 0ll);
    }
    return w>=water;
}
auto solve(vector<ll> a , ll start ,  ll end , ll w){
    ll ans = -1; 
     while(start <= end){
         ll mid = (start + end) / 2;
         if(feasibility(a , mid , w)){
              ans = mid;
              // this can be the answer we need to increase our search space to the right
              start = mid + 1;
         }else{
              // we exceeded the water limit decrease it
              end = mid - 1;
         }
     }
     cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t;
cin>>t;
while(t--){
    // if we do the brute force solution then its a tle obv
    // lets try the binary serch 
    ll n , x;
    cin>>n>>x;
    vector<ll> a(n);
    for(auto& input : a)
        cin>>input;
    ll mn = 1;
    ll mx = x + *max_element(a.begin() , a.end());
    //now our search space is staring from min to max 
    solve(a , mn  , mx , x);
}
    
    return 0;
}