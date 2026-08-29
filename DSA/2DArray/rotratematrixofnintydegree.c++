#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;

    //creating 2d array

    int **first = new int *[row];

    //intailising the columns
    for(int i=0;i<row;i++){
        first[i] = new int [col];
    }


    //for taking input
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>first[i][j];
        }
    }

  
    //traverse the array
    for(int i=0;i<row;i++){
        for(int j =i+1;j<col;j++){
            swap(first[i][j],first[j][i]);
        }
    }
    

     //swap the array column
   for (int i = 0; i < row; i++) {
     reverse(first[i], first[i] + col);
   }
     


 //print the output
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<first[i][j]<<" ";
        }
        cout<<endl;
    }
    

} 















