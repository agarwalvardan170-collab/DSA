#include<iostream>
using namespace std;
int linear_search(int nums[],int size ,int target){
    for(int i = 0; i<size;i++){
        if(nums[i] ==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int nums[5] = {3,4,5,6,7};
    int size = 5;
    int target = 5;
    cout<<linear_search(nums,size,target);
}
