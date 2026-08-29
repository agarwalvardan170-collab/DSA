#include<iostream>
#include<vector>
using namespace std;
void insertion(vector<int>& nums,int i){
    //base case
    if(i>nums.size()){
         
        return ;
    }
    int j=i-1;
    int temp =nums[i];
    
     //cout<<nums[i];
    for(;j>=0;j--){
        //shifting
       
        if(nums[j]>temp){
            nums[j+1] = nums[j];
        }
        //ruk ja
        else{
            break;
        }
    }
  
    nums[j+1] = temp;
    insertion(nums,i+1);
}

int main(){
    vector<int> nums={7, 4, 1, 5, 3};
     int i = 1;
    insertion(nums,i);
    for(int i=0 ;i<nums.size();i++){
   cout<<nums[i]<<" ";
    }
    
}