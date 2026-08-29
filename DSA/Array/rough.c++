#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={10,5,2,7,1,9};
    int ch=0;
    int target=15;
    for(int i=0;i<nums.size();i++){
        int cnt=1;
        int k=nums[i];
        if(k==target)
        ch=max(ch,cnt);
        for(int j=i+1;j<nums.size();j++){
            k+=nums[j];
            cnt++;
            if(k==target){
             ch=max(ch,cnt);
              }
            }
    }
cout<<ch;
}