#include<iostream>
#include<vector>
using namespace std;
int get_pivot(vector<int> & nums){
    int k = nums.size();
    int s =0;
    int e = nums.size()-1;
    int mid = s+(e-s)/2;
    while(s<e){
    if(nums[e]<nums[mid]){
        s = mid+1;
    }
    else{
      e = mid;
    }
     mid= s+(e-s)/2;
    }
   return e;
}
int main(){

 vector<int> nums={1};
 cout<<get_pivot(nums);
   /** int cnt=0;
    vector<int> nums = {3, 4, 5, 1, 2};
    for(int i = 0; i<nums.size();i++){
        if(nums[i+1]>=nums[i]){
            cnt ++;
        }
        else{
            cout<< cnt+1;
        }
    }



*/

}