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
vector<int> findMax(vector<long long> victory, int n) {
    vector<int> maxies = {-1, -1, -1};

    for (int i = 0; i < n; i++) {
        if (maxies[0] == -1 || victory[i] > victory[maxies[0]]) {
            maxies[2] = maxies[1];
            maxies[1] = maxies[0];
            maxies[0] = i;
        }
        else if (maxies[1] == -1 || victory[i] > victory[maxies[1]]) {
            maxies[2] = maxies[1];
            maxies[1] = i;
        }
        else if (maxies[2] == -1 || victory[i] > victory[maxies[2]]) {
            maxies[2] = i;
        }
    }

    return maxies;
}

int main(){
  
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 0; 
    cin>>t;
    while(t--){

        long long n = 0; 
        cin>>n;
        vector<long long> a(n);
        vector<long long> b(n);
        vector<long long> c(n);
        for(long long i = 0; i < n; i++)
           cin>>a[i];
        
        for(long long i = 0; i < n; i++)
           cin>>b[i];
        
        for(long long i = 0; i < n; i++)
           cin>>c[i]; 

        long long answer = 0;
        // find the max three 
        for(auto& i : findMax(a , n)){
            for(auto& j : findMax(b , n)){
                for(auto& k : findMax(c , n)){
                      if( i != j && j != k && i !=k){
                        answer = max(answer , a[i] + b[j] + c[k]);
                      }
                }
            }
        }
        cout<<answer<<endl; // i guess bro
    
    }
    return 0;
} 