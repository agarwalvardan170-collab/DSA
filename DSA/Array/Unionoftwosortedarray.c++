#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr1[6]={3, 4, 6, 7, 9, 9};
    int n= 6;
    int arr2[5]={1, 5, 7, 8, 8};
    int m =5;
    int i =0 ;
    int j=0;
   vector<int> nums;
   while(i<n and j<m){
     if(arr1[i]==arr2[j]){
       if(nums.empty() || nums.back() != arr1[i]){
              nums.push_back(arr1[i]);
        }
          i++;
         j++;
        
     }
     else if(arr1[i]!=arr2[j]){
     if(arr1[i]<arr2[j]){
         if(nums.empty() || nums.back() != arr1[i]){
             nums.push_back(arr1[i]);
        }
         i++;
           
    }
    else{
   if(nums.empty() || nums.back() != arr2[j]){
      nums.push_back(arr2[j]);
    }
     j++;
    } 
   }

}
while(i<n){
if(nums.empty() || nums.back() != arr1[i]){
 nums.push_back(arr1[i]);
}
i++;
}
while(j<m){
if(nums.empty() || nums.back() != arr2[j]){
    nums.push_back(arr2[j]);
}
  j++;
}
for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<endl;
}
}