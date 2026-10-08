#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0; 
    cin>>t;
    while(t--){
        int n = 0; 
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        for(int i = 0; i < n; i++)
           cin>>a[i];
        
        for(int i = 0; i < n; i++)
           cin>>b[i];
        
        for(int i = 0; i < n; i++)
           cin>>c[i];   
        int larp1 = *max_element(a.begin() , a.end());
        int larp2 = *max_element(b.begin() , b.end());
        int larp3 = *max_element(c.begin() , c.end());

        int larpingwinner =larp1 > larp2 ? larp1 > larp3 ? 1 : 3 : larp2 > larp3 ? 2 : 3;
        int larpersSum = 0;
        switch(larpingwinner) {
            case 1:
                // larp1
               int stilllarping = larp2>larp3?'No 2 larp':'yea its';
               switch(stilllarping){
                case 'No 2 larp':

                case 'yea its':
               }

            case 2:
                // larp2
                break;

            case 3:
                // larp3
                break;
        }
    return 0;
} 