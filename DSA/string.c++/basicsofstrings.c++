#include<iostream>
using namespace std;
int main(){
    char name[10];
    cin>>name;
    int n=6;



    /**Pailindrom*/
int st=0;
int et =n-1;
while(st<et){
    if(name[st]!=name[et]){
        cout<<false;
        break;
    }
    else{
        st++;
        et--;
    }
}






/***reverse a string */
int s = 0 ;
int e = n-1;
while(s<e){
   swap(name[s++],name[e--]);
}


    /**printing the name */
   for(int i =0;name[i]!='\0';i++){
    cout<<name[i];
   }

    /**counting the length */
    int cnt =0;

    for(int i =0;name[i]!='\0';i++){
        cnt+=1;
    }
    cout<<cnt;

    
}