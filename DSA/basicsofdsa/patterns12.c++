#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=i){
          cout<<j;
          j++;
        }
        int c =1;
        while(c<=2*(n-i)){
            cout<<" ";
            c++;
        }
         int k = i;
        while(k>=1){
         cout<<k;
         k--;
        }
        i++;
       cout<<endl;
    }

}