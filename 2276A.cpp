#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t = 0;
  cin>>t;
  while(t--){
    int a  = 0 , b = 0;
    cin>>a>>b;
    int answer = -1;
    if (a > b){
          answer = min(a/2 , b);
          int remainder = answer - b;
          if(remainder != 0){
            answer = answer - 1;
          }
    }
    cout<<answer<<endl;
  }
    return 0;
}

