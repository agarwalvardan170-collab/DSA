#include<iostream>
using namespace std;
int main(){
    int nums[6]={1,1,0,1,1,1};
    int n;
    cin>>n;
    int cnt = 0;
    int maxcount =0;
    for(int i =0;i<n;i++){
        if(nums[i]==1){
            cnt++;
           maxcount = max(maxcount,cnt);
        }
        else{
            cnt=0;
        }
        
    }
    cout<<maxcount;
}