
#include <iostream>
#include <vector>
using namespace std;

int nextNumber(int x) {
    int sum = 0;

    while (x > 0) {
        int digit = x % 10;
        sum += digit * digit;
        x /= 10;
    }

    return sum;
}

bool happy(int x) {
    vector<int> seen;

    while (x != 1) {
        for (int i = 0; i < seen.size(); i++) {
            if (seen[i] == x)
                return false;
        }

        seen.push_back(x);
        x = nextNumber(x);
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int happyCount = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (happy(x))
                happyCount++;
        }

        cout << happyCount * (happyCount - 1) / 2 << '\n';
    }

    return 0;
}
