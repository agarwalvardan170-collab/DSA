#include<iostream>
using namespace std;
bool pailindrom(string &arr,int i,int j){
    //base case
    if(i>j){
      return true;
    }
    if(arr[i]!=arr[j]){
        return false;
    }
    //recursive call
    pailindrom(arr,i+1,j-1);

}
int main(){
    string name = "vardan";
    int size = 5;
   cout<< pailindrom(name,0,name.length()-1);
    
}