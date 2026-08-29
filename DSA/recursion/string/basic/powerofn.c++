#include<iostream>
using namespace std;
double power(double&x ,int n){
    //base case
    if(n==1){
        return x;
    }
    if(n==0){
        return 1;
    }
    //recursive call
   return x*power(x,n-1);
}
int main(){
   double x;
    cin>>x;
    int n;
    cin>>n;
    if(n<0){
        x=1/x;
        n=-(n);
    }
     cout<<power(x,n);
}
