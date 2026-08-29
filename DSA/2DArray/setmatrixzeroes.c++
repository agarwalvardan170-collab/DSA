#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;

    int **first = new int *[row];

    for(int i =0;i<row;i++){
      first[i]=new int [col];
    }

    //for taking input
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>first[i][j];
        }
    }
    vector<bool> rowMark(row,false);
    vector<bool> colMark(col,false);
   
   for(int i =0;i<row;i++){
    for(int j=0;j<col;j++){
        if(first[i][j]==0){
            rowMark[i] = true;
            colMark[j] = true;
        }
    }
   }

   // for fixing the array
    for(int i =0;i<row;i++){
    for(int j=0;j<col;j++){
        if(rowMark[i]||colMark[j]){

             first[i][j] = 0;

        }
    }
   }


// for printing the array
      for(int i =0;i<row;i++){
    for(int j=0;j<col;j++){
       cout<<first[i][j];
    }
    cout<<endl;
   }

  
}