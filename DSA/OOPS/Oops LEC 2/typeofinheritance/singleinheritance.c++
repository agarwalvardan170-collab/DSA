#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    char st;

    public:
    void awaz(){
        cout<<"myau myau";
    }
};
class cat : public Animal{
    //i inherit the animal class
    public:
    void peeti(){
        cout<<"tume gate (public likha)khula choda isliye  doodh(inheriate age,st,awaz) pi gyi";
    }
};
int main(){
   cat obe;
   cout<<obe.age;
   obe.awaz();
   cout<<obe.st;
   obe.peeti();
}