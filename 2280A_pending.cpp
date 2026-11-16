#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t;
cin>>t;
while(t--){
    int n , k;
    cin>>n>>k;
    vector<ll>a(n);
    vector<ll>b(n);
    for(auto& input: a)
    cin>>input;
    for(auto& input: b)
    cin>>input;
    ll sum1 = 0;
    ll sum2 = 0;
    for(auto& num : a)
    sum1+=num;
    for(auto& num : b)
    sum2+=num;

    // check for the 3 cases
    // 2.x + k || x + 2 || x - 2
    if(sum1 < sum2 && sum1 % 2 == 0){
        // case x + 2
        cout<<"yes"<<endl;
        continue;
    }
    if(sum1 > sum2 && (sum1 % 2 == sum2 % 2)){
        cout<<"yes"<<endl;
    }
    int aec = 0;
    int aoc = 0;
    int acec = 0;
    int acoc = 0;
    int bec = 0;
    int boc = 0;
    for(int i = 0; i < n; i++){
         if(a[i] % 2 == 0){
            // covers x - 2 && x + 2 case
            aec++;
         }else{
            aoc++;
         }
         if(2*a[i] + k % 2 == 0){
             if(a[i] % 2 != 0){
                acec++;
             }
         }else if(2*a[i] + k % 2 != 0){
            if(a[i] % 2 == 0){
                acoc++;
            }
         }
            if(b[i] % 2 == 0){
                bec++;
            }else{
                boc++;
            }
        }
        if(aec == bec){
            if( aoc == boc){
            cout<<"Yes"<<"\n";
            }else if(aoc + acoc == boc)
        }else if(aec + )
}
    
    return 0;
}