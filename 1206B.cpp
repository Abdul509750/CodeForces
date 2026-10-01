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

// choice optimization--dp
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

long long solve(long long n, bool neg){

    if(n == 0){
        return 1;
    }

    if(neg == false){
        return abs(n) - 1;
    }

    return abs(n) - 1;
} 

int main(){

    int n = 0;
    cin >> n;

    long long answer = 0;
    int negativecount = 0;
    int zerocount = 0;

    for(int i = 0; i < n; i++){

        long long number = 0;
        bool flag = false;
      
        cin >> number;

        if(number <= 0){
            flag = true; 
        }

        if(number < 0){
            negativecount++;
        }

        if(number == 0){
            zerocount++;
        }

        answer += solve(number, flag);
    }

    // if negatives are odd and there is no zero,
    // we need an extra cost of 2
    if((negativecount & 1) && zerocount == 0){
        cout << answer + 2 << endl;
    }
    else{
        cout << answer << endl;
    }

    return 0;
}