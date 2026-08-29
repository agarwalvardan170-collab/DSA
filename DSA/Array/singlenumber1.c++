#include<iostream>
using namespace std;
int main(){
    int nums[7]={1, 2, 2, 4, 3, 1, 4};
    int n=7;
    int ans =0;
    for(int i=0;i<n;i++){
        int ans = ans^nums[i];
    }
   cout<<ans;
}
