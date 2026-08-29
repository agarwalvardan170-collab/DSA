#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int i = 0;
    int cnt = 1;
    while(i<n){
      int j = 0;
      while(j<=i){
        cout<<(i+j+1)%2;
        if(j!=i){
            cout<<" ";
        }
        j++;
      }
      i++;
      cout<<endl;
    }


}