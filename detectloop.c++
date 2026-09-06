#include<iostream>
#include<map>
using namespace std;
class Node{
  public:
  int data;
  Node*next;

  Node(int d){
    this->data = d;
    this-> next = NULL;
  }
};
void Insertathead(Node*&tail,int element,int d){
  if(tail==NULL){
    Node*kali = new Node(d);
    tail = kali;
    kali->next = kali;
    return;
  }
   
  Node*kali = tail;

  while(kali->data != element){
    kali = kali->next;
    
  }
  
  Node*temp = new Node(d);
  temp->next = kali->next;
  kali->next = temp;
    
}
void print(Node*tail){
   Node*temp = tail;
   do{
    cout<<tail->data<<" ";
    tail =tail->next;
   }while(temp!=tail);
   cout<<endl;
}

//detecting loop
bool detect(Node*tail){
  if(tail==NULL){
    cout<< "empty list";
    return false;
  }
  map<Node*, bool> visited;
   Node*kali  =tail;
  while(kali!=NULL){
    if(visited[kali] == true ){
      return true;
    }
    //asing the true of element for cheking
    visited[kali] = true;
  }
  return false;
}


int main(){
   Node*tail = NULL;
   
  Insertathead(tail,1,4);
  Insertathead(tail,4,3);
  Insertathead(tail,3,5);
  Insertathead(tail,5,7);

  print(tail);
    cout<<detect(tail)<<endl;
  //cout<<head->data<<endl;
  //cout<<tail->data<<endl;
}