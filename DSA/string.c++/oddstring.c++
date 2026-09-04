#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  string s ="52";
  int n = s.size()-1;
   int digit = 0;

  if(s[0]=='0'){
    s.erase(0,1);
    n--;
  }
  for(int i=n ;i!=-1;i--){
    if(s[i]%2==0){
      s.pop_back();
    }
    else{
      cout<<s;
      break;
    }
  }
}
