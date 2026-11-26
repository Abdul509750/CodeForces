#include<iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
          ios::sync_with_stdio(false);
          cin.tie(nullptr);

     ll t = 0;
     cin>>t;
     while(t--){
        ll n , k;
        cin>>n>>k;
        unordered_map<char , ll> string;
        for(ll i = 0; i < n; i++){
            char character;
            cin>>character;
            string[character]++;
        }
        bool isGood =  true;
         for(auto& it : string){
            if(it.second % 2 != 0){
                // if making it even makes answer less than zero then break
                if(k-- < 0){
                    isGood = false;
                    break;
                }
            }
         }
         if(isGood)cout<<"Yes"<<"\n";
         else cout<<"No"<<"\n";

     }
    return 0;
}