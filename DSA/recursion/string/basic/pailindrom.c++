#include<iostream>
using namespace std;
bool pailindrom(string& ch , int s ,int e){
    //base case
    if(s>e){
        return true;
    }
    if(ch[s]!=ch[e]){
        return false;
    }
    else{
        pailindrom(ch,s+1,e-1);
    }

    //recursion 

}
int main(){
    string ch = "acba";
    int size = 4;
   cout<<pailindrom(ch,0,size-1);
}
 