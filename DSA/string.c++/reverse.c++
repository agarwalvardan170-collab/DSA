#include<iostream>
using namespace std;
int main(){
    string ch = "abcde";
    int size = 6;
   int s= 0;
   int e = ch.length()-1;
   while(s<e){
     swap(ch[s],ch[e]);
     s++;
     e--;
   }

   cout<<ch;
}