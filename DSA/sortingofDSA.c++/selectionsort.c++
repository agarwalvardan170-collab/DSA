#include<iostream>
using namespace std;
int main(){
    int nums[5] ={7,1,4,3,5};
    int size =5;
    int ans =0;
    for(int i=0;i<size;i++){
        ans =i;
        for(int j=ans+1;j<size;j++){
            if(nums[j]<nums[ans]){
                ans = j;
            }
        }
        swap(nums[ans],nums[i]);
    }
for(int i =0;i<size;i++){
    cout<<nums[i]<<endl;
}
}