#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0; 
    cin >> t;

    while(t--){
        vector<int> st;
        int n;
        cin>>n;
        for(int i = 0; i < n; i++){
           int number = 0;
           cin>>number;
            st.push_back(number);
        }
        // accordint to obs the number can be roughly divided into 
        // three families those who give mod 0 , mod 2 and oddd
        int family1 = 0; // mod0
        int family2 = 0; // mod2
        int family3 = 0; // odd
        for(int i = 0; i < st.size(); i++){
                if(st[i] % 4 == 2){
                    family2++;
                }else if(st[i] % 4 == 0){
                    family1++;
                }else if(st[i] % 2 != 0){
                    family3++;
                }
        }
        cout<<max(family1 , max(family2,family3))<<endl;
        
    }
    return 0;
}