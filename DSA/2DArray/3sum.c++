#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int> nums{-1,0,1,2,-1,-4};
  vector<vector<int>> ans;
  int sum=0;
  //sort the elements
  sort(nums.begin(),nums.end());

  for(int i =0;i<nums.size()-2;i++){
    //skip the dublicate iteration
    if(i>0 && nums[i]==nums[i-1]){
        continue;
    }
    int j = i+1;
    int k = nums.size()-1;
    
    while(j<k){
        sum = nums[i]+nums[j]+nums[k];
        if(sum==0){
            vector<int> output;
            output.push_back(nums[i]);
            output.push_back(nums[j]);
            output.push_back(nums[k]);

            j++;
            k--;

        //skip the dublicate values
        while(j<k && nums[j]==nums[j-1]){
            j++;
        }
         //because do you think how can i check this 
         //because tha's time the k on nums.size()-1 par hai beacuse 2 line uper hi pich kiya h ek value
         while(j<k && nums[k]==nums[k+1]){
            k--;
        }
        
        //store the ans
        ans.push_back(output);
        }
        else if(sum>0){
            k--;
        }
        else{
            j++;
        }
    }
  }
  
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j =0;j<ans[i].size();j++){
            cout<<ans[i][j]<<",";
        }
        cout<<"]";
    }
}







/** 
int main(){
    vector<int> nums{-1,0,1,2,-1,-4};
  
    vector<vector<int>> ans;
    for(int i=0;i<nums.size()-2;i++){
        
        for(int j = i+1;j<nums.size()-1;j++){
            for(int k =j+1;k<nums.size();k++){
                if(nums[i]+nums[j]+nums[k]==0){
                     vector<int> output;
                    output.push_back(nums[i]);
                     output.push_back(nums[j]);
                      output.push_back(nums[k]);
                      
                      ans.push_back(output);
                }
            }
        }
        
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j =0;j<ans[i].size();j++){
            cout<<ans[i][j]<<",";
        }
        cout<<"]";
    }
}*/