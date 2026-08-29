#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
 
    unordered_map<char, int> mp;
      string t = "ab";
   string s = "a";
   if(s.size()!=t.size()){
    cout<<false;
     
   } 
   
   for(int i=0;i<s.size();i++){
     mp[s[i]]++;
   }
 
   for(int i=0;i<s.size();i++){
     mp[t[i]]--;
   }
   

   for(auto i: mp){
    cout<<i.first<<"->"<<i.second;
    if(i.second != 0){
        cout<<false;
        break;
    }
    
   }
   cout<<true;
   
    
    
}