#include<iostream>
#include<vector>
using namespace std;
int partician(vector<int>& nums,int s,int e){

    int pivot = nums[s];
  
    int cnt=0;
    for(int i =s+1;i<=e;i++){
        if(nums[i]<pivot){
            cnt++;
        }
    }
   int pivotindex = cnt+s;
    swap(nums[s],nums[pivotindex]);

    int i=s;
    int j =e;

    while(i<pivotindex && j>pivotindex){
        while(nums[i]<nums[pivotindex]){
           i++;
        }
        while(nums[j]>nums[pivotindex]){
            j--;
        }
       if(i<pivotindex && j>pivotindex){
        swap(nums[i],nums[j]);
        i++;
        j--;
       }
    }
  return pivotindex;
 
}
void quicksort(vector<int>& nums , int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //cout<<"hello";
    int p = partician(nums,s,e);

     quicksort(nums,s,p-1);
   
     quicksort(nums,p+1,e);
}

int main(){
    vector<int> nums = {40,70,50,80,10};
    int n = nums.size();

quicksort(nums,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<nums[i];
    }
}