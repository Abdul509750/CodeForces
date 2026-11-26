#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t = 0;
    cin>>t;
    while(t--){
        ll n , k , x;
        cin>>n>>k>>x;
               ll minimumsum = k * (k + 1) / 2;
              ll maximumsum = k * (2 * n - k + 1) / 2;
        if(x<=maximumsum && x>=minimumsum){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }
    return 0;
} 