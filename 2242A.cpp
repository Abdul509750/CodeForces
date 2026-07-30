#include<iostream>
#include<stack>
#include<vector>
using namespace std;
bool checkCommon(string& a , stack<string>& ms){
  while(!ms.empty()){
    string b = ms.top();
    ms.pop();
    if (a == b){
      return true;
    }
  }
  return false;
}
int main(){
    int t = 0;
    cin>>t;
    while(t--){
      int k = 0;
      cin>>k;
      vector<int> myvect;
      for(int i = 0; i < k; i++){
         int c1;
         cin>>c1;
         myvect.push_back(c1);
    }
    // my vect <2,1,1,2,2,1> (aababbaab)
    // we will look for either 2 consecutive occurrences of 2,2
    // case aa , bb
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < myvect.size(); i++){
          if(myvect[i]==2 && i%2==0){
            count1++;
          }else if (myvect[i]==2 && i%2 != 0){
            count2++;
          }
          if(count1 > 1 || count2 > 1){
            cout<<"YES"<<endl;
          }
    } 
    // case ab , ba
    bool flag = false;
    for(int i = 0; i < myvect.size()-1; i++){
        int number1 = myvect[i];
        number1+=(myvect[i+1]*10);
        if(number1>10){
      for(int k = i + 2; k < myvect.size() - 2; i+=2){
         int number2 = myvect[k];
         number2 = (myvect[k + 1])*10;
         if(number2>10){
            cout<<"YES"<<endl;
            flag = true;
            break;
         }
      }
      if(flag){
        break;
      }
    }
  }
  if(!flag){
  cout<<"No"<<endl;
  }
}