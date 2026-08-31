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
        int k = 0;
        cin>>k;
        vector<int> s1(k);
        // all the cards and their occurence
        for(int i = 0; i < k; i++){
         int input = 0;
         cin>>input;
         s1.push_back(input);
        }
        // now we have the cards input like yes in this form (c1,c2,c3)
        // there are two posibilities one same type occurence (should be greater than 2)
        // type 2 is the different cards but atleast two times (c1 = 2 , c2 = 2)
        sort(s1.begin() , s1.end() , greater<int>());
        // if the greatest is greater than 2 then its yes
        // TYPE 1
        if(s1[0] > 2){
            cout<<"Yes"<<endl;
        }else if(s1[0] == 2 && s1[1] == 2){
            // check the next most TYPE 2
                cout<<"Yes"<<endl;
            
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}