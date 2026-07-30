#include<iostream>
using namespace std;

int main(){
    int t = 0; 
    cin>>t;
    while(t--){
        int x , y;
        cin>>x>>y;
        if(x%y==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}