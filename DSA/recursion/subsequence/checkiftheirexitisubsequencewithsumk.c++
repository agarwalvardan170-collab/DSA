#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int>& nums,int index,int sum ,int k,int& cnt){
    //base case
    if(index==nums.size()){
        if(sum==k){
            cnt++;
        }
        return ;
    }
    //exclude 
    solve(nums,index+1,sum,k,cnt);

    //include
    solve(nums,index+1,sum+nums[index],k,cnt);
}
int main(){
    vector<int> nums ={4,9,2,5,1};
    int k = 10;
    int cnt = 0;
    int index = 0;
    solve(nums,index,0,k,cnt);
    if(cnt!=0){
       cout<< true;
    }
    else{
       cout<< false;
    }

}