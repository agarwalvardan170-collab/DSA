#include<iostream>
using namespace std;

class Human {
    private:
    int age;
    string color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
    //getter
    void get(){
        cout<<this->age<<endl;
    }

    //setter
    void set(int age){
    this->age = age;
    cout<<"age succefully added";
    }

};

int main(){
    Human obj1;
    obj1.speak();
    obj1.get();
    obj1.set(45);
    obj1.get();
}