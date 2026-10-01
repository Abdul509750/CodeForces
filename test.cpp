#include<iostream>
using namespace std;
// using the sliding window approach
int solve(int arr[] , int n , int target){
    // use the 2 pointers sliding window technique
    int left = 0;
    int min = INT_MAX;
    int current_sum = arr[left];
    if (current_sum >= target){min = 1; return min;}
    for(int right = 1; right < n; right++){
        current_sum+=arr[right]
         if(current_sum >= target){
            // check how much can we contract
            while((current_sum - arr[left]) > target){
                current_sum-=arr[left];
                left++;
            }
            min = min(min , right - left + 1);
         }
    } 
    return min;
}
int main(){

    return 0;
}