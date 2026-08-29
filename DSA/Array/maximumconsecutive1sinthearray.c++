#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {0,0,0,0,0,0,0,1,1,1,1};
    int cnt=0;
    int ans =0;
    for(int i =0;i<nums.size();i++){
        if(nums[i]!=0){
            cnt++;
            ans=max(ans,cnt);
        }
        else{
          cnt=0;
        }
    }
    cout<<ans;
}