#include<iostream>
#include<algorithm>
using namespace std;


const long long MOD = 1000000007;

long long power(long a,long n){
    //base case
    if(n==0){
        return 1;
    }
    if(n==1){
        return (a%MOD);
    }
    
    long ans = power(a,n/2);
    if(n%2==0){
     return (ans*ans)%MOD;
    }
    else{
      return (((a % MOD) * ans) % MOD * ans) % MOD;;
    }
}

int main(){
    long n; 
    cin>>n;
    
    long long  even = (n+1)/2;
    long long odd = (n)/2;

    long long c = power(5,even);
    long long p = power(4,odd);

   cout<< (c*p)%MOD;

}