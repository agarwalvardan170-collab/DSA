#include<iostream>
using namespace std;
int main(){
/**int n;
    cin>>n;

    int **arr  = new int *[n];

    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }
    //for taking input
for(int i =0 ; i<n;i++){
    for(int j=0;j<n;j++){
       cin>> arr[i][j];
    }
}


for(int i =0 ; i<n;i++){
    for(int j=0;j<n;j++){
       cout<< arr[i][j]<<" ";
    }
    cout<<endl;
}
*/
/*if array of row and col size is different*/
int row;
cin>>row;
int col;
cin>>col;

//creating 2d array
int **arr = new int*[row];
for(int i=0;i<row;i++){
    arr[i] = new int[col];
}
//for taking input
 for(int  i =0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
 }
 //for printing the array
 for(int  i =0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
 //relesing memory
 for(int i=0;i<row;i++){
    delete [] arr[i];
}

delete [] arr;
}