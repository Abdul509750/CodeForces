#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int k;
    cin >> k;
    vector<int> myvect(k);
    for (int i = 0; i < k; i++) {
        cin >> myvect[i];
    }

    int count1 = 0, count2 = 0;
    bool found = false;

    // Case 1: Checking parity positions
    for (int i = 0; i < k; i++) {
        if (myvect[i] == 2) {
            if (i % 2 == 0) count1++;
            else count2++;
        }
        if (count1 > 1 || count2 > 1) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES\n";
        return;
    }

    // Case 2: Pairwise checking without infinite loop
    for (int i = 0; i < k - 1; i++) {
        int number1 = myvect[i] + (myvect[i + 1] * 10);
        if (number1 > 10) {
            for (int j = i + 2; j < k - 1; j += 2) { // Fixed increment variable to j (or k)
                int number2 = myvect[j] + (myvect[j + 1] * 10);
                if (number2 > 10) {
                    found = true;
                    break;
                }
            }
        }
        if (found) break;
    }

    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}