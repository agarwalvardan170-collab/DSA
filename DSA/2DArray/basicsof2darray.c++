#include<iostream>
using namespace std;
bool linearsearch(int arr[][4],int target , int row,int col){

    for(int i=0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
void rowsum(int arr[][4],int target ,int row ,int col){
    
     for(int i=0;i<row;i++){
        int sum=0;
        for(int j =0;j<col;j++){
         sum+=arr[i][j];
        }
        cout<<sum;;
    }
}
void cowsum(int arr[][4],int target ,int row ,int col){
    
     for(int i=0;i<col;i++){
        int sum=0;
        for(int j =0;j<row;j++){
         sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[3][4];
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    //input
  for(int i=0;i<3;i++){
        for(int j =0;j<4;j++){
           cin>>arr[i][j];
        }
      
    }
//print
     for(int i=0;i<3;i++){
        for(int j =0;j<4;j++){
           cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
//target
cout<<"enter the element you want to search "<<endl;
int target;
cin>>target;
if(linearsearch(arr,target,3,4)==1){
    cout<<"it's present";
}
else{
    cout<<"it's not present";
}
rowsum(arr,target,3,4);
cowsum(arr,target,3,4);
}

