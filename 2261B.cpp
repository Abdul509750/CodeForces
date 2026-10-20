#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t;
cin>>t;
while(t--){
    int n = 0;
    cin>>n;
    vector<ll> input(n , -1);
    for(ll& number : input){
        cin>>number;
    }
    ll result = 0;
    for(int b = 30; b >= 0; b--){
        int have = 0;
        for(ll number : input){
            if((number >> b) & 1){
                 have++;
            }
        }
        if(have == n){
            result |= (1LL << b);              // every element has this bit
        }else if(have > 0){
            result |= (1LL << (b + 1)) - 1;   
            break;
        }
    }
    cout<<result<<endl;
}
    
    return 0;
}