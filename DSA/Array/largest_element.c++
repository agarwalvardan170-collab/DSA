#include<iostream>
using namespace std;
int largestelement(int arr[] ,int size){
    int ans = 0;
    int k = arr[0];
  for(int j=1;j<size;j++){
    if(k<arr[j]){
        ans = arr[j];
    }
  }
 
 cout<<ans<<endl;
}
int main(){
    int arr[5] ={3, 3, 0, 99, -40};
    int size = 5;
    largestelement(arr,size);
}
/*2nd approach 
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> marks ={8, 8, 7, 6, 5};
    sort(marks.begin(),marks.end());
    int largest = marks.size()-1;
 
}



*/