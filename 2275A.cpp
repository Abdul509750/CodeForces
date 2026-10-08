/*
If Allah’s decree has drawn the line,
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
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x0, y0, R;
        cin >> x0 >> y0 >> R;

        cout << x0 << " " << y0 + R << endl;
    }

    return 0;
}