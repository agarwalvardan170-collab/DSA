#include<iostream>
using namespace std;
//parent class
class Animal{
   protected:
    int age;
    int weight;

    public:
    void speaking(){
        cout<<"barking";
    }
};
//child class
class Dog :public Animal{
  
 

public:
  void bonkh(){
    cout<<"me bokh raha hu";
  }
     void get(){
        cout<<age;
    }
};

int main(){
   Dog manvi;
   manvi.get();
  manvi.speaking();
  
   manvi.bonkh();
}