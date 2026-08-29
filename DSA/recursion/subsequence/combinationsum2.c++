#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve(vector<int>& candidates, vector<int> temp,vector<vector<int>>& ans,int index,int target){
  
    //base case
    if(target<0){
        return;
    }
    if(index == candidates.size()){
       
        return;
    }
    if(target == 0){
       
         ans.push_back(temp);
         return;
    }
    
     for (int i = index; i < candidates.size(); i++) {

        // Skip duplicates
        if (i > index && candidates[i] == candidates[i - 1]) {
            continue;
        }

        // Since array is sorted
        if (candidates[i] > target) {
            break;
        }

        // Include
        temp.push_back(candidates[i]);

        // Move to next index because each element can be used only once
        solve(candidates, temp, ans, i + 1, target - candidates[i]);

        // Backtrack
        temp.pop_back();
    }
}
int main(){
    vector<int> candidates{10,1,2,7,6,1,5};
    vector<int> temp;
    vector<vector<int>> ans;
    int index =0;
    int target  = 8;
    sort(candidates.begin(),candidates.end());
    solve(candidates,temp,ans,index,target);
    
    for(int i = 0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
    }
   

}