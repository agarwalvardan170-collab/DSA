#include<iostream>
#include <cstring>
using namespace std;

class Hero {
 
    public:
    int health;
    char level;
    char *name;
    static int timetoshow;
    
    Hero(){
        cout<<"Constructer called"<<endl;
        name = new char[100];
    }
    void print(){
        cout<<"name" <<this->name<<endl;
        cout<<"level "<<this->level<<endl;
        cout<<"health" <<this->health<<endl;
    }
    
    Hero(int health){
        //cout<<"this "<<this<<endl;
        this-> health = health;

    }

     Hero(int health,char leval){
       this-> level = leval;
        this-> health = health;

    }
    //copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        cout<<"Copy Constructer Called";
        this->health = temp.health;
        this-> level = temp.level;
    }


    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
   int sethealth(int pani){
        health = pani;
    }
    int setlevel(char puri){
        level = puri;
    }

    static int random(){
        return timetoshow;
    }
   
   void setName(char name[]){
    strcpy(this->name,name);
   }

//Destructor
   ~Hero(){
    cout<<"Destructor bhai called"<<endl;
   }
   
};

int Hero::timetoshow = 90;

int main(){

    cout<<Hero::random()<<endl;


/**
    cout<<Hero::timetoshow<<endl;

    Hero a;
    cout<<a.timetoshow<<endl;

    Hero b;

    b.timetoshow = 10;

    cout<<a.timetoshow<<endl;
    cout<<b.timetoshow<<endl;
*/


/**
//static Allocation
Hero a;

//Dynamic Allocation

Hero *b =new Hero();
delete b;


*/
      
/**
    Hero hero1;

    hero1.sethealth(12);
    hero1.setlevel('d');
     

    char name[7] = "vardan";
    hero1.setName(name);
     hero1.print();

    Hero hero2(hero1);
      hero2.print();

    hero1.name[0] = 'g';
    hero1.print();

    hero2.print();

 */

  /** Hero suresh(70,'r');
   suresh.print();

   Hero R(suresh);
   R.level = 'f';
   R.health =  445;
   R.print();*/


  

/**
    //object created statically
    Hero ramesh(78,'a');
    //cout<<"Address of ramesh"<<&ramesh<<endl;
     ramesh.print();
   //dynamically
    Hero *h = new Hero  ();

    h->print();

    Hero temp(56,'b');
    temp.print();
     */
    
    /**
    Hero a;
     a.sethealth(65);
     a.setlevel('a');
    cout<<"level is " <<a.level<<endl;
    cout<<"health is"<<a.health<<endl;

    //dynamically
    Hero *b = new Hero;
    b->sethealth(70);
    b->setlevel('A');
    cout<<"health is"<<(*b).gethealth()<<endl;
        cout<<"level is"<<(*b).getlevel()<<endl;*/
        /*Hero h1;
    h1.health  = 97;
    h1.level= 'A';
    cout<<h1.health<<endl;
    cout<<h1.level<<endl;
    h1.sethealth(78);
    h1.setlevel('a');
    cout<<h1.gethealth()<<endl;
    cout<<h1.getlevel();*/
    
}

 














































/**
class vardan{
    private: 
int health;
char level;
public:
    char *name;

    vardan() {
        name = new char[100];
        cout << "mai to execute ho gya" << endl;
    }

    ~vardan() {
        delete[] name;
    }
int gethealth() {
    return health;
}
//default constructor
/*
vardan(){
        char name[100];
    cout<<"mai to excute ho gya"<<endl;

}
//parameter condstructor
vardan(int health){
    cout<<this<<endl;
    this->health=health;
}
vardan(int health,char level){
    this->level=level;
}
//copyconstructor
vardan(vardan& temp){
    char *ch = new char(strlen(temp.name+1));
    strcpy(ch,temp.name);
    this->name=ch;
    this->health=temp.health;
    this->level=temp.level;
}
char getlevel() {
    return level;
}
void print(){
    cout<<'['<<this->name<<',';
    cout<<this->level<<',';
    cout<<this->health<<']';
}

int sethealth(int h) {
   health = h;
}

int setlevel(char ch){
   level = ch;
}
int setname(char ch[]){
    strcpy(this->name,ch);
}
};
int main(){
vardan a;

a.sethealth(40);
a.setlevel('k');
char name[7]="vardan";
a.setname(name);
a.print();

vardan b(a);
b.print();


a.name[0]='b';
a.print();
b.print();


}

/*
 vardan s(70,'C');
 s.print();
/*
 vardan R(s);
 R.print();
*/
    /*
    vardan a(10);
    cout<<&a<<endl;

    */
    
    /**
//statis allocation
vardan a;
a.sethealth(40);
a.setlevel('a');
cout<<a.gethealth()<<endl;
cout<<a.getlevel();
//dynamicallocaly
vardan *b=new vardan;
b->sethealth(30);
b->setlevel('b');
cout<<(*b).gethealth()<<endl;
cout<<(*b).getlevel()<<endl;
**/

   /* vardan ramesh; 
    cout<<sizeof(ramesh);
    cout<<ramesh.sethealth(40)<<endl;
 cout<<ramesh.gethealth()<<endl;
 cout<<ramesh.setlevel('A')<<endl;
 cout<<ramesh.getlevel()<<endl;*/
