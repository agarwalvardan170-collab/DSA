#include<iostream>
#include<map>
using namespace std;

//creat the first linkdln list
class Node{
 public:
 int data;

 Node*next;
 Node(int data){
  this->data = data;
  this->next = NULL;
 }

 ~Node(){
  int value = this->data;

  //memory free
  if(this->next !=NULL){
     delete next;
    this->next = NULL;
  }
  cout<<"memory free of the data"<<value<<endl;
 }

};
// Insertion function at head
void InsertionAtHead(Node* &head,int data){
    Node * kali = new Node(data);
    kali->next = head;
    head = kali;
}

//Insetionat tail
void InsertionAtTail(Node* &tail,int data){
    Node * kali = new Node(data);
    tail->next = kali;
    tail = kali;
    
}


//print the list
void print(Node*&head){
  Node* temp = head;

     while(temp !=NULL){
      cout<<temp-> data<<" ";
      temp = temp->next;
     }
     cout<<endl;

}

void InsertAtAnyPosition(Node* &head,Node* &tail,int data,int position){
   //insert at firt postition
  if(position==1){
    InsertionAtHead(head,data);
    return;
  }

  
  Node*temp = head;
   Node*tich = tail;
  int cnt =1;
  while(cnt<position-1){
    temp = temp->next;
    cnt++;
  }
  Node*puch= new Node(data);
  puch-> next = temp->next;
  temp->next=puch;

  //Insert at tail
  if(tich->next ==NULL){
    InsertionAtTail(tail,data);
    return ;
  }

  //set head
   puch->next = tich->next;
     tich->next = puch;

}
void InsertAtMid(Node* &head,int data,int position){
  
  Node*temp = head;
  int cnt =1;
  while(cnt<position-1){
    temp = temp->next;
    cnt++;
  }
  Node*puch= new Node(data);
  puch-> next = temp->next;
  temp->next=puch;

}


void removedublicates(Node*&head){
  if(head == NULL){
    return ;
  }
   Node*curr = head;
   
   while(curr->next !=NULL){
    if(curr->data != curr->next->data){
      curr = curr ->next;
    }
    else{
       Node*next_next = curr->next;
       curr->next = curr->next->next;
       delete(next_next);
    }
   }
 
}

int main(){


   Node*kalam = new Node(10);
  Node* head = kalam;
 
    InsertionAtHead(head,7);
    print(head);
     InsertionAtHead(head,7);
    print(head); 
    InsertionAtHead(head,6);
    print(head); 
    InsertionAtHead(head,6);
    print(head); 
    InsertionAtHead(head,5);
    print(head); 
    InsertionAtHead(head,4);
    Node* tail = kalam;
    
    removedublicates(head);
    print(head);



}








