#include<iostream>
#include<vector>
using namespace std;
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        int ans =-1;
        if(nums.size()==0 || nums.size()==1){
          if(nums[s]==target){
            return 0;
          }
          else{
            return -1;
          }
        }

        while(s<=e){
            if(nums[mid]==target){
                ans =mid;
                return ans;
                
            }
            else if(nums[s] <= nums[mid]){
              cout<<"jinda hu";
                if(nums[mid]>target){
                   e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
            else{
              cout<<"jai bhole baba ki"<<endl;
              if(nums[mid]<target && nums[mid]<=nums[e]){
                cout<<"are kya kha"<<endl;
                s= mid+1;
               
              } 
                  else{
                       e = mid-1;
                  }            
            }
            mid = s+(e-s)/2;
        }
        return ans;
 }
int main(){
  vector<int> nums={4,5,6,7,0,1,2};
      int target = 0;
     cout <<search(nums,target);
}
/** 
int upperbound(vector<int>& arr,int s,int e,int target){
  int mid = s+(e-s)/2;

  while(s<e){
    if(arr[mid]<=target){
      s=mid+1;
    }
    else {
      e = mid-1;
    }
  
    mid = s+(e-s)/2;
  }
  return s;
}

int lowerbound(vector<int>& arr,int s,int e,int target){
  int mid = s+(e-s)/2;
 
  while(s<=e){
    if(arr[mid]<=target){
      e = mid-1;
    }
    else {
      s = mid+1;
    }
    mid = s+(e-s)/2;
  }
  return s;
}
int main(){
  vector<int> arr={0,0,1,1,1,2,3};
   int e = arr.size();
   int s = 0;
   int target = 1;
   int mid = s+(e-s)/2;
  
  
 
}*/