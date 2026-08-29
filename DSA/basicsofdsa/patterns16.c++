 #include<iostream>
 using namespace std;
 int main() {
int i =1;
int n= 5;
char ch = 'A';
    while(i<=n){
        int j=1;
        while(j<=i){
          cout<<ch;
          j++;
        }
        ch++;
        i++;
       cout<<endl; 
        }
}