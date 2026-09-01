#include<iostream>
using namespace std;


bool solve(int number){
    //case 1 is that its divisible by 2020
    // case 2 is that its divisible by 2021
    // case 3 is that its sum of both 2020 & 2021
    // case 3a if its even and last digit is greater than 0, then even number of 2021 are used
    // in this case we will do if remain = number % 2021 && remain % 2020 == 0 then yes
    // case 3b if its odd then odd number of 2021 is used and yess
    if(number % 2020 == 0){
        return true;
    }else if(number % 2021 == 0){
        return true;
    }else{
        int remain = number % 2021;
        if(remain % 2020 == 0){
            return true;
        }else{
            return false;
        }
    }
}
int main(){
    int t = 0;
    cin >> t;
    while(t--){
        int number = 0;
        cin>>number;
        string answer = solve(number)==true?"Yes":"No";
        cout<<answer<<endl;
    }
    return 0;
}