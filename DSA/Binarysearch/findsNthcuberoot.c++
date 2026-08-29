#include<iostream>
#include<vector>
using namespace std;
long long power(int base,int N, int M){
    long long ans = 1;
    for(int i=1;i<=N;i++){
        ans*=base;
           if(ans > M) return ans;
    }
    return ans;
}
int squarerootbinarysearch( int N, int M){
    int s=0;
    int e=M;
    while(s<=e){
        long long mid=s+(e-s)/2;
      long long ans = power(mid,N,M);
        if(ans==M){
            return mid;
        }
        else if(ans < M){
            s = mid+1;
        }
        else{
            e=mid-1;
        }
    }
 return -1; 
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
  cout<<squarerootbinarysearch(n,m);
}