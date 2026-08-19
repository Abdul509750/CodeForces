#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;

bool hasduplicates(vector<int>& s){
  unordered_set<int> v(s.begin() , s.end());
  return s.size() == v.size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t = 0;
  cin>>t;
  int SIZE = 3;
  while(t--){
  vector<int> numbers;
  for(int i = 0; i < SIZE; i++){
    int num = 0;
    cin >> num;
    numbers.push_back(num);
  }
  // check if the vectors has the duplicates
  if (!hasduplicates(numbers)){

      cout << 0 <<endl;
      continue;
  }
  // sort and take the minimum difference from the highest and the lowestv
  sort(numbers.begin() , numbers.end());
  int highest = numbers[SIZE - 1];
  int s_highest = numbers[SIZE - 2];
  int lowest = numbers[SIZE - 3 ];
  int diff1 = abs(highest - s_highest);
  int diff2 = abs (s_highest - lowest);
  int answer = min(diff1 , diff2);
  cout<<answer<<endl;
}
    return 0;
}