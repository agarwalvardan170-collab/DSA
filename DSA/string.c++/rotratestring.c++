#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   string nums ={"abcde"};
   string goal = {"adeac"};
    string temp = nums+nums;
    int j = 0;
    int k = 0;
   
  while(j<temp.size()){
    if(temp[j] == goal[k]){
         j++;
         k++;
     if(k ==goal.size()){
       cout<<true;
       break;
       }
         } 
         
   else{
     j = j-k+1;
     k =0;
   }
}
  cout<<false;
}