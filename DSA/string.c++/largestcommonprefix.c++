#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> nums={"flowers" , "flow" , "fly", "flight"};
        if(nums.size() == 0) {
        cout << "";
        return 0;
    }
   string ans=nums[0];
for(int i =0 ;i<nums.size();i++){
    string temp = "";
    for(int j = 0 ; j<min(ans.size(),nums[i].size());j++){
      if(ans[j]==nums[i][j]){
          temp.push_back(ans[j]);
      }
      else{
        break;
      }
    }
    ans=temp;
    if(ans == "") break; 
}
   cout<<ans;
}
