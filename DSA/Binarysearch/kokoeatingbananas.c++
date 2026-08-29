#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxvalue(vector<int>& nums){
    int ans = 0;
    int maxi = 0;
    for(int i = 0;i<nums.size()-1;i++){
      maxi = max(nums[i],maxi);
    }
    return maxi;
}
int koko(vector<int> &nums , int n ,int k){
    int ans =0;
    for(int i = 0; i<nums.size();i++){
        if(nums[i]%k!=0){
        ans += nums[i]/k+1;
        }
      else{
        ans += nums[i]/k;

      }
    }
    return ans;
}
int binarysearch(vector<int>& nums,int n,int h){
int s =1;
int e =n;
int mid = s+(e-s)/2;
int answer=-1;
while(s<=e){
    int ans = koko(nums,n,mid);
   if(ans<=h){
    answer =mid;
    e = mid-1;
    }
    else{
        s = mid+1;
    }
    mid =s+(e-s)/2;
}
return answer;
}
int main(){
    vector<int> nums = {805306368,805306368,805306368};
    int h = 1000000000;
    int n =maxvalue(nums);
   cout<<binarysearch(nums,n,h);

}
