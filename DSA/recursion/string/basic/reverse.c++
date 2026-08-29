#include<iostream>
using namespace std;
void  reverse(string &ch , int size,int s,int e){
   //base case
   if(s>=e){
    return ;
   }

   //recursion call
   swap(ch[s],ch[e]);
     reverse(ch,size,s+1,e-1);
     
     cout<<"reverse string"<<endl<<endl<<ch<<endl;
}
int main(){
    string ch = "abcde";
    int size =5;
   reverse(ch,size,0,size-1);
    cout<<"it's actuall string"<<endl<<ch;
}