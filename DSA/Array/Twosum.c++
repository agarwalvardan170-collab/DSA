#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> nums={1, 6, 2, 10, 3};
int k=7;
for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
        if(nums[i]+nums[j]==k){
           cout<<i<<" ";
           cout<<j;
        }
    }
}
cout<<" ";
}