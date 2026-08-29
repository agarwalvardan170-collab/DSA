#include<iostream>
#include<vector>
using namespace std;
int squarerootbinarysearch(int s, int e, int target){
    long long mid=s+(e-s)/2;
    int check=-1;
    while(s<=e){
      long long ans=mid*mid;
        if(ans==target){
            return mid;
        }
        else if(ans < target){
            check=mid;
            s = mid+1;
        }
        else{
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
     return check; 
}
int main(){
    int n;
    cin>>n;
  cout<<squarerootbinarysearch(0,n,n);
}