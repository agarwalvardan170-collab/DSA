#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {2, 4, 5, -1, -3, -4};
    
    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}