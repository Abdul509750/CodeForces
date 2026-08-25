
//added the solution for 4A (maintaining the streak)
#include<iostream>
using namespace std;

int main(){
    int weight = 0; 
    cin>>weight;
    if(weight == 2){
        cout<<"No"<<endl;
    }
    else if(weight % 2 == 0){
        cout << " yes " <<endl;
    }else{
        cout<<"No"<<endl;
    }

}