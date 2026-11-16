#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t;
cin>>t;
while(t--){
    ll n , k;
    cin>>n>>k;
    vector<ll>input(n);
    ll prev = -1;
    bool not_same = true;
    bool issorted = true;
    // nigga what if its already sorted
    for(auto& num : input){
        cin>>num;
        if(prev == -1){
            prev = num;
            continue;
        }
        if(prev != num){
            not_same = false;
        }
        if(num < prev){
            issorted = false;
        }
        prev = num;
        
    }
    if(k == 1 && !not_same && !issorted){
        cout<<"No"<<"\n";
    }else{
        cout<<"Yes"<<"\n";
    }
}
    
    return 0;
}