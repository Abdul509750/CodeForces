// 1D DP consecutive-state DP
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // lenght of array
    int n;
    cin>>n;
    
    int dp = 0;
    int largestStreak = 0;
    vector<int> container(n);
    for(int i = 0; i < n; i++){
        int input = 0;
        cin>>container[i];
    }
    int prev = container[0];
    dp++;
    
    for(int i = 1; i < n; i++){
        int element = container[i];
       if(element >= prev){
        dp++;
        prev = element;
       }else{
        largestStreak = max(largestStreak , dp);
        dp = 1;
        prev = element;
       }
      
    }
     cout<<max(dp , largestStreak);

    return 0;
}