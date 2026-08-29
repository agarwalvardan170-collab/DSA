#include<iostream>
using namespace std;
int main(){

    int arr[5] = {1,2,1,2,1};

    int n =5;
   
   int  k =3;
   int  cnt =0;
    for(int i =0;i<n;i++){
        int sum =0;
      for(int j=i;j<n;j++){
          sum+=arr[j];
        if(sum==k){
            cnt++;
        }
      }
      
      
    }
  cout<<cnt;

}