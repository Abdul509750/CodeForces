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
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin>>t;
    while(t--){
        int n = 0; 
        int  k = 0;
        cin>>n>>k;
        // level up bro ezz shiii
        vector<long long>a(n);
        vector<long long>b(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < n; i++)
            cin>>b[i];
        
        int iterator = min(n , k);
        long long sum = 0;
        long long largestsofar = b[0];
        long long ans = -1;
        for(int i = 0; i < iterator; i++){
            // faaaahhhh
            // so what we will do is check how much at each quests unlock we get the summm
            // uodate the largest
            largestsofar = max(largestsofar , b[i]);
            sum+=a[i];
            // sum at this point will be the quests unlocked and the largest k - i times
            long long newsum = sum + largestsofar * (k - i - 1);
            ans = max(ans , newsum);
        }

       cout<<ans<<endl;
    }
    

    return 0;
}