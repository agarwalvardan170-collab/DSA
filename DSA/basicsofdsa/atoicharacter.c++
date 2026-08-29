#include<iostream>
using namespace std;
int main(){
    string s; 
    cin>>s;
    int i = 0;

   //space 
   while(i < s.size() && s[i] == ' ' ){
    i++;
   }
   //sign
   int sign = 1;
  if(i<s.size()&&(s[i] == '-' || s[i] == '+')){
    if(s[i]=='-'){
        sign = -1;
    }
    i++;
  }

//digit to int
long long  ans =0;

while(i<s.size() && isdigit(s[i])){
   int digit = (s[i]-'0');
    if (ans > (INT_MAX - digit) / 10) {
         return sign == 1 ? INT_MAX : INT_MIN;
    }
   ans = ans*10+digit;
    i++;
}

cout<<sign*ans;


} 