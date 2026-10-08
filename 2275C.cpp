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
    cin.tie(nullptr);
    long long t = 0;
    cin>>t;
    while(t--){
    long long n = 0;
    cin>>n;
    vector<long long> input(n);
    vector<long long> previousSums;   // value of every triad
    for(long long i = 0; i < n; i++)
        cin>>input[i];

    long long x = 0;
    long long k = 0; // number of pairs


    while(x + 4 < n){
        previousSums.push_back(input[x] + input[x + 2] - input[x + 4]);
        x++;
    }
    long long m = previousSums.size();


    vector<long long> sorted = previousSums;
    sort(sorted.begin(), sorted.end());
    long long i = 0;
    while(i < m){
        long long j = i;
        while(j < m && sorted[j] == sorted[i]) j++;
        long long c = j - i;
        k += c * (c - 1) / 2;
        i = j;
    }

    x = 0;
    while(x < m){
        if(x + 2 < m && previousSums[x] == previousSums[x + 2]){ 
            k--;
        }
        if(x + 4 < m && previousSums[x] == previousSums[x + 4]){
             k--;
        }
        x++;
    }

    cout<<k<<endl;
    }

return 0;
}