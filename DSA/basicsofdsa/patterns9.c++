#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i =0;
    while(i<n){
        int k =0;
        while(k<n-i){
            cout<<" ";
            k++;
        }
        int j=0;
        while(j<2*i+1){
          cout<<"*";
          j++;
        }
        i++;
       cout<<endl;
    }

    i = 1;
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