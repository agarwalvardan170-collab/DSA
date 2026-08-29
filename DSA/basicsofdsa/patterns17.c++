#include<iostream>
using namespace std;
int main(){
    int n= 5;
    int i = 1;
    char ch = 'A';
    char k = ch;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<ch<<" ";
           ch--;
            j++;
        }
        cout<<endl;
        i++;
        ch+=i;
    }
}