#include<iostream>
#include<vector>
using namespace std;
int  removedublicate(int nums[],int size){
    if(size==0){
        return 0;
    }
   int k = 1;
   for(int i =1;i<size;i++){
    if(nums[i]!=nums[k-1]){
        nums[k]=nums[i];
      k++;
    }
   }
   return k;
}
int main(){
    int nums[8] ={-2, 2, 4, 4, 4, 4, 5, 5};
    int size =8;
    int ans = removedublicate(nums,size);
    cout<<ans;
}