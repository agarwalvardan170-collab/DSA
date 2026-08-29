#include<iostream>
using namespace std;
class Animal{
public:
int dodh;

public:
void speak(){
    cout<<"speaking";
}
};
class cat : public Animal{
 public:
 void pi(){
    cout<<"gate khula mila doodh pi gyi";
 }
 
};
class dog : public cat{
   public:
   void khagya(){
    cout<<"gate khula tu aayi me thuje kha gya";
 }
};
int main(){
    cat myau;
    myau.dodh;
    myau.pi();
   dog jermanseft;
  jermanseft.khagya();
}