#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
 // try another logic since the swap is free which means we can take the 
    // number where we want cant we do something start string t from zero and construct 
    // where we finished the required digit the answer will be there as
    // substraction of s - t
    while (t--) {
        string str;
        cin >> str;

        ll zeroC = 0, oneC = 0;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '0') zeroC++;
            else oneC++;
        }

        string tr = "";

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1') {
                if (zeroC > 0) {
                    tr += "0";
                    zeroC--;
                   
                } else {
                    break;
                }
            } else {
                if (oneC > 0) {
                    tr += "1";
                    oneC--;
                } else {
                    break;
                }
            }
        }

        cout << str.size() - tr.size() << "\n";
    }

    return 0;
}