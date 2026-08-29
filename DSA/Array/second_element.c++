#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> marks ={10, 10, 10, 10, 10};

    sort(marks.begin(),marks.end());

    int largest = marks.size()-1;
    int secondlargest= marks[largest];

    bool flag = true;
    
   while(largest>=0){

   if(secondlargest!=marks[largest]){

    cout<<marks[largest]<<endl;
     flag = false;
    break;
   }
   else{
    largest--;
   }
}
if(flag == true){
    cout<<-1;
}
}