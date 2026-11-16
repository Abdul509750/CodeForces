#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t;
cin>>t;
while(t--){
    int n , q;
    cin>>n>>q;
    vector<ll> input(n);
    vector<ll> queries(q);
    for(auto& num : input)
      cin>>num;
    for(auto& inp : queries)
      cin>>inp;
    ll mn = LLONG_MAX;
    sort(queries.begin() , queries.end());
    
    for(int i = 0; i<q; i++){
        
        ll x = queries[i];
        if( x >= mn){
            continue;
        }
        ll num = 1 << x - 1; 
        ll number = 1 << x;
        if(x < mn){
            mn = x;
        }

        for(int j = 0; j < n; j++){
             if(input[j] % number == 0){
                    input[j] += num;
             }
        }
    }
    for(auto& number : input)
    cout<<number<<" ";
    cout<<"\n";
} 
    
    return 0;
}