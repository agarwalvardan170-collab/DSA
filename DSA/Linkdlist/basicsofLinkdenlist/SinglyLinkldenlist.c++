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

bool checkcirclurlinkdinlist(Node*tail){
    Node*temp =tail->next;
    if(tail == NULL){
       return true;
    }

    while(temp!=NULL && temp!=tail){
     temp = temp->next;
    }
    if(temp==NULL){
        return false;
    }
    else{
        return true;
    }
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
//for middle deletion
void Delete(Node*&head,int position){
    if(position==1){
      Node*temp  = head;
      head = temp ->next;
      temp->next = NULL;
      delete temp;
    }
    else{
       int cnt = 1;
      Node* curr = head;
      Node * prev = NULL;
      while(cnt<position){
        prev = curr;
       curr= curr->next;
       cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

    }
   
}

int main(){


   Node*kalam = new Node(10);
   
  Node* head = kalam;
 
 InsertionAtHead(head,7);
    print(head);
Node* tail = kalam;
InsertionAtTail(tail,11);
    print(tail);

InsertAtMid(head,3,1);
print(head);
InsertAtAnyPosition(head,tail,5,4);
print(head);
print(tail);

int ans  =  checkcirclurlinkdinlist(tail);
   if(ans==1){
      cout<<"circular linkdinlist"<<endl;
   }
   else{
    cout<<"not a circular linkdin list"<<endl;
   }

Delete(head,6);
print(head);
}













/** 
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
       this-> data = data;
       this->next = NULL;
    }
};

//InsertAtHead
void Insertathead(Node* &head,int data){


    //new node for data
    Node*temp = new Node(data);

    //second work  to point the next so i remve and point the refrence node head
    temp -> next = head;
    //third work to set the head to temp head
    head = temp;
}

//set the tail in linkdlnlit
void InsertAtTail(Node* & tail,int data){
     //new node for data
    Node*temp = new Node(data);

    tail->next = temp;
    tail = temp;

}

//InsertAt list of any position
void InsertAtPosition(Node* &tail,Node* &head,int position,int data){

    //position1
    if(position ==1){
        Insertathead(head,data);
        return;
    }
   Node* temp = head;
    int cnt= 1;

    while(cnt<position-1){
      temp = temp->next;
      cnt++;
    }

    //insertatposition

    //new node of data
    Node *kalam = new Node(data);


    
     //set tail 
      if(temp->next ==NULL){
        InsertAtTail(tail,data);
        return;
      }

    //set head
    kalam->next = temp->next;
     temp->next = kalam;

}




//Print the list
void print(Node *&head){
   Node* temp = head;

        while(temp!=NULL){
            cout<<temp-> data <<" ";
           temp =temp-> next;
        }
        cout<<endl;
    
}


int main(){


    //created a new node
    Node*node1 = new Node(10);

    //cout<<node1-> data<<endl;
    //cout<<node1-> next<<endl;
    
 
    //head pointed to node1
    Node* head = node1;
    Node * tail = node1;
    
        print(head);
      InsertAtTail(tail,12);
 
       print(head);
     InsertAtTail(tail,15);
      print(head);

      InsertAtPosition(tail,head,4,22);
    
          print(head);

            cout<<head->data<<endl;
            cout<<tail->data<<endl;
    print(head);
      Insertathead(head,12);
 
       print(head);
      Insertathead(head,15);
      print(head);


    return 0;
}*/