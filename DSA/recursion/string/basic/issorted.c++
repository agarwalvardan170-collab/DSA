#include<iostream>
using namespace std;
bool issorted(int *arr,int n){
    //base case
    if(n==0|n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorted(arr+1,n-1);
    }

}
int main(){
    int n =7;
    
    //dynamic memory
    //int *arr = new int [n];
    //static memory
    int arr[7] = {2,4,5,6,7,8,9};
  
 cout<<issorted(arr,n);

    
}