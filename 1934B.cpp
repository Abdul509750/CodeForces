#include<iostream>
#include<vector>
using namespace std;

const int INF = 1e9;

vector<int> value(100001, -1);

int coins[] = {1,3,6,10,15};

int solve(int x){

    if(x < 0)
        return INF;

    if(x == 0)
        return 0;

    if(value[x] != -1)
        return value[x];

    int best = INF;

    for(int c : coins){
        best = min(best, solve(x - c) + 1);
    }

    value[x] = best;

    return best;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int number;
        cin >> number;

        cout << solve(number) << '\n';
    }
}