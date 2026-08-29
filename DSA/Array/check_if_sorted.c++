#include<iostream>
using namespace std;
bool  check(int arr[] ,int size){
  bool flag = true;
  if(size==0||size==1){
    return 1;
  }
    for(int i =0; i<size;i++){
        if(arr[i]>arr[i+1]){
         flag = false;
        }
    }
    if(flag == true){
        return 1;
    }
    else{
        return 0;

    }
}
int main(){
    int nums[5] = {1,2,3,14,5};
    int size = 5;
    int ans = check(nums,size);
    cout<<ans;
}