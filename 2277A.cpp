
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> input(n);
        map<int , int> problem;

        for (auto& number : input) {
            cin >> number;
            problem[number]++;
        }
    // we would be making the group of k
    // minimum with maximum
    vector<int> result;
    for(int i = 0 ; i  < n; i++){
        int temp = k;
        vector<int> localResult;
        while(k--){
            
        }
    }
    }

    return 0;
}
