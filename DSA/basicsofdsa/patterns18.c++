#include<iostream>
using namespace std;
int main(){
    int n= 5;
    int i = 1;
    char ch = 'A'+ n ;
    while(i<=n){
        int j =1;
        ch = ch -i;
        while(j<=i){
            cout<<ch<<" ";
           ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}