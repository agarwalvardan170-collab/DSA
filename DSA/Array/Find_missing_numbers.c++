#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int missing_number(vector<int> & nums , int n){
    sort(nums.begin(),nums.end());
   for(int i =0 ; i<n;i++){
    if(nums[i]!=i){
        return i;
    }
   }
   return n;
}
int main(){
    vector<int> nums = {0, 2, 3, 1, 4};
    int  n = nums.size();
    int ans = missing_number(nums,n);
    cout<<ans;
      
}