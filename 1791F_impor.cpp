#include <bits/stdc++.h>
#include<set>
#include<algorithm>
using namespace std;
typedef long long ll;
// stores the sum of all the numbers upto 10^8
map<ll , ll> dp;

ll claculateSum(ll number){
    if( dp.count(number) ){
        return dp[number];
    }
    ll copy = number;
    // we here will calculate the digits sum
    // worst case complexity is 10e9 cz ai can be 10e9
    ll sum = 0;
    while( number > 0){
        auto remainder = number % 10; // take out the last digit
        sum += remainder;
        number/=10;
    }
    dp[copy] = sum;
    return sum;
}
// the recurrence relation i found is dp[n] = dp[n / 10] + dp[n % 10]
void solve(){
    // alright so the input consist of the l & r
        ll n , q;
        cin>>n>>q;
        vector<ll>input(n , -1);
        for(auto& number : input){
            cin>>number; 
        }
        // set for the iteration of the active indexes only 
        // cz the solution of the duplicate indexes is solved the only thing that is remaining
        // is the loop of changes thats running  wether its the single digit number or multi 
        // digit number so if we keep track of the indexes of the numbers active only we can make the 
        // iteration loop l to r much more efficient
        set<ll> active;
        for(ll i = 0; i < n; i++){
            if(input[i] >= 10)  
              active.insert(i);
        }
        //take the queries
        while(q--){
            ll firstelement = 0;
            cin>>firstelement;
            if(firstelement == 1){
                ll l , r;
                cin>>l>>r;
                // entertain the query we have the 2 cases
            auto it = active.lower_bound(l - 1);
            
            while((it != active.end()) && *it < r ){
                ll i = *it;
                input[i] = claculateSum(input[i]);

                if(input[i] < 10){
                    // erase the iterator current and point the iterator to next element
                    it = active.erase(it);
                }else{
                    ++it;
                }
            }       
        }else{
             ll k = 0;
             cin>>k;

          cout<<input[k - 1]<<"\n";

        }
    }
    return;
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