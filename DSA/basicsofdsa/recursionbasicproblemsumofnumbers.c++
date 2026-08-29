#include<iostream>
using namespace std;
int Number(int n){

    //base case
    if(n==0){
      return 0;
    }
    //recursive call
    return Number(n-1)+ n;

}
int main(){
    int n;
    cin>>n;
    cout<<Number(n);
}