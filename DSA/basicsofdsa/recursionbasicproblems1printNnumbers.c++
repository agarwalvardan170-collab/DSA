#include<iostream>
using namespace std;
void number(int n){
    //base case
    if(n==0){
        return;
    }
   
    //recursive call;
     number(n-1);
     //print call
   cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
 number(n);
}