#include<iostream>
using namespace std;
/*int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;

    //buy
    int buy = arr[0];
  int cnt=0;
    for(int i=0;i<n;i++){

        if(arr[i]<buy){
            buy = arr[i];
            cnt = i+1;
        }
    }
//sell
int sell =0;
for(int j =cnt+1;j<n;j++){
    int ans = arr[j]-buy;
     sell=max(ans,buy);
    
  
}
cout<<sell;
}*/
int main(){
    int arr[5] = {5,4,3,2,1};
    int n=5;
    int buy = arr[0];
    int profit = 0;
    for(int i =1 ;i<n;i++){
      buy = min(buy,arr[i]);
      profit=max(profit,arr[i]-buy);
    }
    cout<<profit;
}