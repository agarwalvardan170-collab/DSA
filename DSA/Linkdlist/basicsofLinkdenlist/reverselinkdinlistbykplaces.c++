#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
  int data;
  Node*next;

  Node(int d){
  this->data = d;
  this->next =NULL;
  }
};

void InsertAtHHead(Node*&head,int d){
    if(head==NULL){
      Node*temp = new Node(d);
      head = temp;
      
      return;
    }
    else{

      Node*kali = new Node(d);
      
      kali->next= head;
      head = kali;

      return;
    }
}


void print(Node*&head){
    Node*temp =head;
    
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp =temp->next;
    }
    cout<<endl;
}

Node * linkdlnlistinsertbykplaces(Node*&head,int k){

  //revrse ndeis here
  if(head==NULL){
    return head;
  }

  //node is less than frm k places
  Node*temp = head;
  int cnt =0;
  if(temp!= NULL){
    temp = temp->next;
     cnt++;
  }

  if(cnt<k){
    return head;
  }

  //revrse nodes
  Node*prev =NULL;
  Node*forward = NULL;
  Node*curr =head;
  int count =0;
  //step 1
  while(curr!=NULL ||  count < k){
    
      forward =curr->next;
      curr->next = prev;
      prev =curr;
      curr =forward;
      count++;
  }

  
  
  //step2 - recursive call samballegi
  if(forward!=NULL){
      head ->next = linkdlnlistinsertbykplaces(forward,k);
  }
  


  //step 3

  return prev;

}

int main(){
  Node*vandematram= new Node(8);
  Node*head =vandematram;
  InsertAtHHead(head,7);
  InsertAtHHead(head,5);
  InsertAtHHead(head,6);
  print(head);
  cout<<linkdlnlistinsertbykplaces(head,2);

  cout<<head->data<<endl;
}