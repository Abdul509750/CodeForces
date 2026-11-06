#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t;
cin>>t;
while(t--){
    ll n = 0; 
    cin>>n;
    vector<ll> input(n);
    for(auto& number: input){
        cin>>number;
    }

    bool prevEven = input[0] % 2 == 0?true:false;
 
    ll sum = input[0];
    ll maxy = input[0];
    ll i = 0;
    while(i < n){
        
        if(input[i] % 2 == 0 && prevEven){
            // reset indices
            sum = input[i];
        }else if(input[i] % 2 != 0 && prevEven == false){
            sum = input[i];
        }else{
        // handles negative
        prevEven = input[i] % 2 == 0?true:false;
        sum = max(input[i], sum + input[i]);
       
        }
         maxy = max(maxy, sum);
        i++;
    }
    cout<<maxy<<"\n";
}
    
    return 0;
}