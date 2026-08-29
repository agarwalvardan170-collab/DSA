#include<iostream>
using namespace std;
void reversearray(int arr[] , int size){
    int i =0;
    int j = size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
        
    }

}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    reversearray(arr,size);
    for(int i =0 ; i<size; i++){
     cout<<arr[i];
}
}