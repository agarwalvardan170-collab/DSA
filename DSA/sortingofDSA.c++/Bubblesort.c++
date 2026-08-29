#include<iostream>
using namespace std;
int main(){
    int nums[5] ={7,1,4,3,5};
    int size =5;
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(nums[j]>nums[j+1]){
                   swap(nums[j],nums[j+1]);
            }
        }
       
    }
for(int i =0;i<size;i++){
    cout<<nums[i]<<endl;
}
}