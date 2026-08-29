#include<iostream>
#include<vector>
using namespace std;
/*OPTIMAL APPROACH*/
int main(){
    vector<int> nums={3,2,3};
    int el;
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        if(cnt==0){
            el = nums[i];
            cnt=1;
        }
        else if(nums[i]==el){
          cnt++;
        } 
        else{
            cnt--;
        }
    }

    int cnt1=0;
    for(int i = 0;i<nums.size();i++){
        if(el==nums[i]){
            cnt1++;
        }
    }
    if(cnt1>nums.size()/2){
        cout<<el;
    }
    else{
       cout<<-1;
    }
}
/*BRUTE FORCE APPROACH*/
/*int main(){
    vector<int> nums={3,2,3};
    int n = nums.size();
    int cnt=0;
    for(int j=0;j<nums.size();j++){
    for(int i = j;i<nums.size();i++){
        if(nums[i]==nums[j]){
        cnt++;
    }
    }
     if(cnt>n/2){
        cout<<nums[j];
        break;
    }
 
    }

}*/