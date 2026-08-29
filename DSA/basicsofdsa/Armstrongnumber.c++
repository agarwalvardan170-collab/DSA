#include<iostream>
#include<cmath>
using namespace std;
bool Armstrong(int n){
    int original = n;
    int digit = 0;
    int sum =0;
    int cnt =0;
    int temp = n;
    while(temp>0){
      int digit = temp%10;
      cnt++;
      temp = temp/10;
    }
    while(n!=0){
        digit = n%10;
       sum+=pow(digit,cnt);
        n= n/10;
    }
   if(original == sum){
    return true;
   }
   else{
    return false;
   }
}
int main(){
    int n;
    cin>>n;
   cout<<Armstrong(n);
   
}