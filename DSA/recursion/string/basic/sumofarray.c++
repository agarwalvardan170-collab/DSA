#include<iostream>
using namespace std;
int sumofarray(int*arr,int n){
    //base case
      int sum =0;
  
    if(n==0){
        return 0;
    }
   
    //recursion call
    sum =*arr+sumofarray(arr+1,n-1);
    return sum;


}
int main(){
    int arr[5] ={1,2,3,4,5};
    int n = 5;
  
    cout<<sumofarray(arr,n);
    
}