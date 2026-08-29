#include<iostream>
using namespace std;
int main(){
    int arr[5] = {7,4,1,5,3};
    int n = 5;
    for(int i =0 ;i<n;i++){
     int temp =arr[i];
        int j =i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
              //shift
              arr[j+1] =arr[j];
            }
            else{
                break;
            }
        }
     arr[j+1] =temp;
    }
}