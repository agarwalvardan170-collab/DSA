#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    sort(nums.begin(),nums.end());
    int cnt =1;
    int ans=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i-1]+1){
          cnt++;
        }
        else if(nums[i]!=nums[i-1]){
             cnt=1;
        }
        ans=max(ans,cnt);
    }
    cout<<ans;
}