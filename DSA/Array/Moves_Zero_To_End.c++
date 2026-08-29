#include<iostream>
using namespace std;
int move_zero_to_end(int nums[],int size){
    if(size==0){
        return 0;
    }
    int i =0;
    for(int j = 0 ; j<size ; j++){
        if(nums[j]!=0){
           swap(nums[j],nums[i]);
         i++;
        }
    }
   
}
int main(){
    int nums[6] = {0, 1, 4, 0, 5, 2};
    int size =6;
    move_zero_to_end(nums,size);
    for(int i =0; i<size;i++){
        cout<<nums[i]<<endl;
    }
}