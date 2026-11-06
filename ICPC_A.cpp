#include <bits/stdc++.h>
#include<bitset>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n , k;
    cin>>n>>k;
    vector<pair<ll , ll>> input(n);
    for(auto& number: input){
        cin>>number.first>>number.second;
    }

    // obtain first k bits mask the number
                bool keep = false;
    // count number of ones and zeros in both
    for(ll i = 0; i  < n; i++){
               ll check1 = input[i].first;
               ll check2 = input[i].second;
                string s1 = bitset<64>(check1).to_string();
                string s2 = bitset<64>(check2).to_string();
                int range = 63 - k;
                int s10 = 0;
                int s11 = 0;
                int s20 = 0;
                int s21 = 0;
    for(int i  = 63; i > range; i--){
         if(s1[i] == '0'){
            s10++;
         }
         if(s1[i] == '1' ){
            s11++;
         }
         if(s2[i] == '0'){
            s20++;

         }
         if(s2[i] == '1'){
            s21++;
         }
         if(s1[i] == s2[i]){
            keep = false;
            goto ans;
         }
    }
    if((s10 == s20) && (s21 == s11)){
        keep = true;
    }else{
        keep = false;
        break;
    }
}
    ans:;
    if(keep){
        for(int i = 1; i < k; i++){
            cout<<i<<" ";
        }
        cout<<0<<endl;
    }else{
        cout<<-1<<endl;
    }


}