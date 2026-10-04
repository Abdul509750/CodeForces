/*If Allah’s decree has drawn the line,
I trust His wisdom and design.
Through every trial, His mercies shine;
I walk this path by will divine.
 
I cannot grasp what lies unseen,
Nor know what every test may mean.
But faith keeps heart and spirit clean,
And Allah knows what might have been.
 
No worldly race defines my worth,
For every soul returns from earth.
Through darkest nights and days of mirth,
The Qur’an guides me from my birth.
 
When right and wrong seem hard to see,
I turn to Allah faithfully.
In prayer, my restless heart breaks free
Through zikr comes tranquillity.
 
The grace I thought I’d never know
Through Allah’s mercy came to grow.
With sabr and trust, my heart will show
That after hardship, ease will flow.
*/

#include<iostream>
#include<vector>
using namespace std;
// but is there anyway we can do contract the vector like inplace(no new datastructure)
// this solution is roughly O(n^2) since each iteration is roughly doing n shift (worst case)
// that means if we have 2 seconds then we will be performing roughly 5 x 10^9 FOR MAX n = 10^5 operations
// which is the possible reason for TLE
// reduce it to n or nlogn
// if we use here the merging concept then we had space complexity of 256 x 10^6 b so if input is 10^5 array and
// every time we use two array for merging that means roughly 2^n tf!!! no no
// what if we dont remove or shift element rather we keep the track of the iteration
// at each step substract the iteration - 1 from the index for the actual position pretty clever
//#1200 rated
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 0;
    cin >> t;

    while (t--) {

        long long n = 0;
        long long k = 0;

        cin >> n >> k;

        vector<long long> s1;

        for (int i = 0; i < n; i++) {
            long long anything = 0;
            cin >> anything;
            s1.push_back(anything);
        }

        long long heheAnswer = 0;

        // Guaranteed middle part (empty when n < 2k-1)
        for (int i = k - 1; i <= n - k; i++) {
            heheAnswer += s1[i];
        }

        // Only n-k+1 operations exist, so only that many pairs get touched
        long long pairs = min(k - 1, n - k + 1);
        for (int i = 0; i < pairs; i++) {
            heheAnswer += max(s1[i], s1[n - 1 - i]);
        }

        cout << heheAnswer << '\n';
    }

    return 0;
}