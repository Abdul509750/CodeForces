#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
using ll = long long;
unordered_map<string , ll> record;
void solve(){
    string str;
    cin>>str;
    if(record.count(str)){
        cout<<(str+to_string(record[str]))<<endl;
        // increase the count to next number 
        record[str]++;
    }else{
        cout<<"OK"<<endl;
        record[str]++;
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    solve();
    }
    
    return 0;
}