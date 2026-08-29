#include<iostream>
using namespace std;
class Manjari{
public:
int makeup;

public:
void batayi(){
    cout<<"mera makeup koi nhi lgayega";
}
};
class Manvi{
public:
int khana;

public:
void kaha(){
    cout<<"mera khana koi nhi khayega";
}
};
class vardan : public Manjari,public Manvi{
 public:
 void bola(){
    cout<<"me to chota hu tumhara dono ka saman use kiya karu or karunga";
 }
};
int main(){
   Manjari manjari;
   manjari.batayi();
   Manvi manvi;
   manvi.kaha();
   vardan var;
   cout<<var.makeup;
   cout<<var.khana;
   var.bola();


}