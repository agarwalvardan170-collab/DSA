#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// it's like brute force because it's timee complexty 0(2n) and space complexity 0(2n)
/*int main(){
    int arr[6] = {2,4,5,-1,-3,-4};
    int n=6;
    vector<int> positive;
    vector<int> negative;
    vector<int> ans;
    for(int i = 0;i<n;i++){
        if(arr[i]>0){
        positive.push_back(arr[i]);
        
        }
        else{
        negative.push_back(arr[i]);
        }
    }
    int p =0;
    int ne=0;
  for(int i=0;i<n;i++){
    if(i%2==0){
     ans.push_back(positive[p]);
     p++;
      }
    else{
      ans.push_back(negative[ne]);
      ne++;
    }
    }

    
  for(int i=0;i<n;i++){
    cout<<ans[i]<<endl;
    }
}*/
 
//optimal space complexity 0(n) and time complexity 0(n)
int main(){
    vector<int> nums ={1, -1, -3, -4, 2, 3};
    int n = nums.size();
    int ans[n];
    int positive = 0;
    int negative =1;
    for(int i =0;i<n;i++){
        if(nums[i]<0){
            ans[negative]=nums[i];
            negative+=2;
        }
        else{
            ans[positive]=nums[i];
            positive+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
}