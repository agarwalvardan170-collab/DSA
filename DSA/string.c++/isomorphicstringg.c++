#include<iostream>
#include<map>
using namespace std;
int main(){
     map<char,char> p;
     map<char,char> k;
    string s = "bbbaaaba";
    string t = "aaabbbba";
    if(s.size()!=t.size()){
        cout<<false;
    }
    for(int i = 0 ; i<s.size();i++){
         char c1 =  s[i];
         char c2 = t[i];
        if(p.count(c1)==1){
          if(p[c1]!=c2){
            cout<<false;
          }          
        }
        else{
           p[c1] = c2;
        }
        if(k.count(c2)==1){
          if(k[c2]!=c1){
            cout<< false;
          }
        }
        else{
           k[c2]= c1;
        }
    }
   
   for(auto i : p){
    cout<<i.first<<" "<<i.second<<endl;
   }
   for(auto i : k){
    cout<<i.first<<" "<<i.second<<endl;
   }
  
}