#include<iostream>
using namespace std;
void number(int n){
    //base case
    if(n==0){
        return;
    }
    //print call
   cout<<n<<endl;
   
    //recursive call;
     number(n-1);
    
}
int main(){
    int n;
    cin>>n;
 number(n);
}