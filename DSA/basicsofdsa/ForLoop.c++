#include<iostream>
using namespace std;
int main(){
    int low,high;
    cin>>low>>high;
    int sum =0;
for(int i = low;i<=high;i++){
  sum+=i;
}
cout<<sum;
}