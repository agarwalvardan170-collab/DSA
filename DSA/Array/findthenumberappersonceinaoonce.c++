#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,2,4,3,1,4};
    int n = 7;
    int  i = 0;
    sort(nums.begin(),nums.end());
    if(nums.size()==0){
        cout<<nums[0];
    }
    while(i<nums.size()){
        cout<<nums[i]<<nums[i+1]<<endl;;
        if(nums[i]!=nums[i+1]){
            cout<< nums[i];
            break;
        }
        i+=2;
    }

}