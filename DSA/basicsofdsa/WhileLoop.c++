#include<iostream>
using namespace std;
int main(){
    int d;
    cin>>d;
    int sum = d;
    int i = 1;
    int ans =d;
    if(0<=d<=9){
    while(i<50){
            sum +=10;
           ans+=sum;
            i++;
        }
   cout<<ans;
    }
   else{
    cout<<"you jump of constraint so please read the constraints";
   }
    }
 