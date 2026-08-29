#include<iostream> 
using namespace std;
//
class Animal{
    public:
    void speak(){
        cout<<"speak";
    }
};

class vardan : public Animal{
    public:
    void speak(){
        cout<<"hasna";
    }
};

//method 1 function ka parameters change kar do
class Calculator {
public:

    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main(){
    Calculator hero;
    cout<<hero.add(3,4);
    cout<<hero.add(3.4,45.0);

    vardan he;
    he.speak();
}