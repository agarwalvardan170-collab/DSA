#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve(vector<int> &nums,int index,vector<int> output,vector<vector<int> > &ans){
    //base case
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }

    //exclude call
    solve(nums,index+1,output,ans);

    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums,index+1,output,ans);
}
int main(){
    vector<int> nums = {4, 9, 2, 5, 1};
    //vector<int> nums = {1,2,3};
    vector<int> output ;
  vector<vector<int> > ans;
   int index = 0;
   int cnt= 0;
   solve(nums,index,output,ans);
   for(int i=0;i<ans.size();i++){
     cout << "{ ";
    for(int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << "}" << endl;

   }
   
}