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
using namespace std;
bool notpresent(char character , vector<char>&seen){
    // constant time complexit of 26 no need to use the 
    // unordered set (0(1)) or the sets (logn)
    for(int i = 0; i < seen.size(); i++){
        if(character == seen[i]){
            return false;
        }

    } 
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin>>t;
    while(t--){
        long long n = 0;
        long long sum = 0;
        cin>>n;
        vector<char>seen;
        vector<char>s1;
       
            string stringy;
            cin>>stringy;
            for(int i  = 0; i < n; i++){
                s1.push_back(stringy[i]);
            }            
       
            for(long long i = 0; i < s1.size(); i++){
            // using n - i approach
                if(notpresent(s1[i] , seen)){
                    sum+=n-i;
                    seen.push_back(s1[i]);
                }
        }
        cout<<sum<<endl;
    }
    return 0;
}
// brute for using dp or visited array? 
// not gonna work cz my solution at each iteration will roughly do
//0(n^2) work so for max 3.10^5 can be if n = 10^5 then rougly squared
// which is impossible under 2 secs time frame their will be TLE  
//bcdaaaabcdaaaa = 4 --> 19 -> 2^4 + (n-1)
//abcdefghijklmnopqrst = 20 -->  210
// there must be some formulae , what it is brainstorm
// possible combination with common elements n!/r!? nah.... 
// hmm.... maybe considering the first occurrence hmmm lets try