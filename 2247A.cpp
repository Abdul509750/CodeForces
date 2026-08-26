//A. Zero Sum
#include<iostream>
#include<vector>
using namespace std;

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
 int  t = 0;
 cin>>t;
 while(t--){
    int size = 0;
    cin>>size;
        // count the negative and positive numbers
    int negative = 0;
    int positive = 0; 
    for(int i = 0; i < size; i++){
        int n = 0; 
        cin>>n;
        if(n<0){
           negative++;
        }else{
            positive++;
        }
    }
    // check if the diferrence is in powers of two
    int difference = 0;
    difference = abs(positive - negative);
    // the condition means that the difference can be bridged by a 2-step operation and after that they come same
    if(positive == negative){
      cout << "Yes"<<endl;
    } else if (positive > negative){
             while(positive > negative){
                positive-=2;
                negative+=2;
             }
             if(positive == negative){
                cout<<"Yes"<<endl;
             }else{
                cout<<"No"<<endl;
             }
    }else{
          while(negative > positive){
                positive+=2;
                negative-=2;
             }
             if(positive == negative){
                cout<<"Yes"<<endl;
             }else{
                cout<<"No"<<endl;
             }
    }
    
 }
   return 0;
}
