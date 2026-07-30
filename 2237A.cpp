
// efficient solution
//prev sol t.c = O(n)^2
// this one is O(n)
#include<iostream>
#include<vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   int t = 0;
   cin>>t;
   
   while(t--){
    int a = 0;
    vector<int>input;
    cin>>a;
    while(a--){
        int ai = 0;
        cin>>ai;
        input.push_back(ai);
    }
    int min = input[0];
    int sum = 0;

    for(int i = 0; i < input.size(); i++){
        // by keeping the track of the minimum
        if(input[i] > min){
            input[i] = min;  
        }else{
            min = input[i];
        }
        sum+=min;
        
    }
    cout<<sum<<endl;
   }



    return 0;
}