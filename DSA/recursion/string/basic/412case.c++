#include<iostream>
using namespace std;
int get_digit(string *arr,int n){
  
    //base case
    if(n==0){
       return 0;
    }
    
    //processing
    int digit = n%10;
        n = n/10;
  

    //recursive call
     get_digit(arr,n);

     cout<<arr[digit]<<" ";
}
int main(){
   string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n ;
    cin>>n;

   cout<<get_digit(arr,n);
}