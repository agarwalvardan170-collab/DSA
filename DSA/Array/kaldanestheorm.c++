#include<iostream>
#include <vector>
using namespace std;
/*OPTIMAL APPROACH*/
int main(){
     vector<int> nums={2,3,5,-2,7,-4};
    int sum=0;
    int maxi=INT16_MIN;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>maxi){
        maxi=max(sum,maxi);
        }
        if(sum<0){
           sum=0;
        }
    }
    cout<<maxi;
}
/*BRUTE FORCE APPROACH*/
/**int main(){
    vector<int> nums={2,3,5,-2,7,-4};
    int k=nums[0];
    int cnt=0;
    for(int i =0;i<nums.size();i++){
     cnt=nums[i];
     for(int j=1;j<nums.size();j++){
        cnt+=nums[j];
        if(cnt>k){
            k=cnt;
            cnt=0;
        }
     }
    }
  cout<<k;
}*/