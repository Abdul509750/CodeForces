#include<iostream>
#include<vector>
using namespace std;



bool tryit(int k , vector<int>& con){
     for(int i = 0; i < con.size(); i++){
        int parts = con[i];
        for(int subtask = 0; subtask < parts; subtask++){
            if(subtask * (100/parts) == k){
                return true;
            }
        }
     }
     return false;
}
bool solve(){
  int n = 0;
  cin>>n;
  vector<int> container(n);
  for(int i = 0; i < n; i++){
    int input = 0;
    cin >> input;  
    container.push_back(input);
  }
  // if we can make upto 10 = k from these parts then its yes otherwise no (trial)
  // k = 10 is sum of 5 + 5 and 5 is sum of 2 + 3 and 3 is sum of 2 + 1 and 2 is 1 + 1
  int flag = true;
  for(int k = 1; k < 10; k++){
    
    if(tryit(k , container)){
        continue;
    }else{
        flag = false;
        break;
    }
  }
  return flag;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin>>t;
    while(t--){
        if(solve() == true){
            cout<<"yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}