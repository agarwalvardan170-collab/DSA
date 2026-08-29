#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(vector<int>& nums,int index,vector<int>& temp,int sum){
  
    if(index==nums.size()){
         temp.push_back(sum);
        return;
    }

    //include
    solve(nums,index+1,temp,nums[index]+sum);

    solve(nums,index+1,temp,sum);

}
int main(){
    vector<int> nums{5, 2, 1};
    int index = 0;
        
    vector<int> temp;
    vector<vector<int>> ans;
    solve(nums,index,temp,0);
    for(int i = 0;i<temp.size();i++){
       
            cout<<temp[i]<<" ";
       
    }
}