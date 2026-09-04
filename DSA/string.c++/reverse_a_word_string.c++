#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){

  string nums= "  sky   is   the  blue  ";

  int s = 0 ;
int e = nums.size()-1;
while(s<e){
   swap(nums[s++],nums[e--]);
}
 s = 0;
 e =0;
while(e<=nums.size() ){
  if(nums[e] == ' ' || nums[e] == '\0'){
     if (s<e) {
         reverse(nums.begin() + s, nums.begin() + e);
         s = e + 1;
        
     } else {
        s++;
    }
  }
  e++;
}

string output = "";

for(int i = 0; i < nums.size(); i++) {

    if(nums[i] == ' ') {
        if(!output.empty() && output.back() != ' ') {
            output += ' ';
        }
    }
    else {
        output += nums[i];
    }
}

// last space remove
if(!output.empty() && output.back() == ' ') {
    output.pop_back();
}
for (int i=0;i<output.size();i++){
  cout<<output[i]<<" ";
}
}