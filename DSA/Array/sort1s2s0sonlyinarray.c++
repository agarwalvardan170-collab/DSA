#include<iostream>
#include<vector>
using namespace std;
int main(){
int nums[6]={1,0,2,1,0,1};
int  i=0;
int n=6;
int j=0;
int  k=5;
while(j<=k){
    if(nums[j]==0){
        swap(nums[i],nums[j]);
        i++;
        j++;
    }
    else if(nums[j]==1){
        j++;
    }
    else{
        swap(nums[j],nums[k]);
        k--;
    }
}
for(int i =0;i<n;i++){
cout<<nums[i]<<" ";
}

}