#include<iostream>
using namespace std;
void print(int *arr,int n){
     cout<<"new array";
    for(int i=0;i<n;i++){
        cout<<endl<<arr[i]<<endl;
         
    }
}
bool linearsearch(int *arr,int n ,int key){
    print(arr,n);
//basecase
if(n==0){
 return false; 
}
if(*arr==key){
    return true;
}
else{
    return linearsearch(arr+1,n-1,key);
}
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n =7;
    int key = 15;
    cout<<linearsearch(arr,n,key);

}