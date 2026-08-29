#include<iostream>
#include<vector>
using namespace std;
int findoneelement(vector<int>& nums){
int n =nums.size();
int s= 0;
    int e = n -1;
    int mid = s+(e-s)/2;
        while(s<e){
      
      if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid]){
        return nums[mid];
      }
        else if(nums[mid]==nums[mid-1]){
         
            if((mid-1)%2==0){
                s = mid+1;
            }
            else{
                e =mid;
            }
        }
        
        else{
            if((mid)%2==0){
               s= mid+1;
            }
            else{
                e = mid-1;
            }
        }
        mid =s+(e-s)/2;
    }
    return nums[s];
}
int main(){
    vector<int> nums = {1, 1, 3, 5, 5};

    cout<<findoneelement(nums);

        

}