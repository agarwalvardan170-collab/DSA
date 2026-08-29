#include<iostream>
using namespace std;
class Animal{


 int data;
 int gaal;
public:


//constructor

Animal(){
    cout<<"me sab sun raha hu";
}

//multiple input para constructor
Animal(int dat,int age,int mali,int kali,int vhai){
 
}

void speeking(){
    cout<<"speaking";
}
void namste(){
    cout<<"nnamste"<<endl;
}
 void get(){
    cout<<this->data<<endl;
 }
int set(int data){
    this-> data =data;
}

//destructor
//~Animal(){
//   cout<<"are meto free ho gaya";
//}



 };

 int main(){
    Animal hero;
    hero.get();
    hero.set(8);
    hero.get();
 }