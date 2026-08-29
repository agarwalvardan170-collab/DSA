 #include<iostream>
 using namespace std;
 int main() {
int i =1;
int n= 5;
    while(i<=n){
        char ch = 'A';
        int j=1;
        while(j<=n-i+1){
          cout<<ch;
          ch++;
          j++;
        }
        i++;
       cout<<endl; 
        }
}