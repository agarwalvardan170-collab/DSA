#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int k =0;
        while(k<i){
            cout<<" ";
            k++;
        }
        int j=0;
        while(j<=2*n-2*i){
          cout<<"*";
          j++;
        }
        i++;
       cout<<endl;
    }
}