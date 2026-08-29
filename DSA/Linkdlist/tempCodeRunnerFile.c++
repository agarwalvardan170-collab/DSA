#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int data){
        this->data = data;
        this-> next = NULL;
    }
    //delete constructor
    ~Node(){
        int val = this->data;
        if(next !=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free"<<" " <<val;
    }
};

void Insertatanyposition(Node*&tail,int data){
      if(tail==NULL){
        Node*temp = new Node(data);
         tail = temp;
        tail->next = temp;
        return;
    }
 
}

void print(Node*&tail){
    if(tail == NULL){
      cout<<"list is empty";
    }
    Node*temp = tail;

    do{
        cout<< tail->data <<" ";
        temp = temp -> next;
    }while(tail != temp);

    cout<<endl;

}

int main(){
    Node*tower = new Node(19);
    Node*tail = tower;
    Insertatanyposition(tail ,4);
    print(tail);

}



















//DOUBLY LINKDEN LIST
/**
class Node {
   public:
   int data;
   Node*next;
   Node*prev;

   //constructor
   Node(int data){
    this->data  =data;
    this-> next =NULL;
    this->prev = NULL;
   }


   //delete constructor
   ~Node(){
      int val = this -> data;
      if(next != NULL){
        delete next;
        next = NULL;
      }
      cout<<"memory free"<<val<<endl;

       }
};

//at head
void InsertAtHead(Node*&head,Node*&Tail,int data){
   if(head==NULL){
    Node *temp = new Node(data);
    head = temp;
    Tail = temp;
   }
   else{
 Node *temp = new Node(data);
  temp->next = head;
  head ->prev = temp;
  temp->prev =NULL;
  head = temp;

  
   }

}

//at tail
void InsertAtTail(Node*&head,Node*&Tail,int data){
   if(Tail==NULL){
    Node *temp = new Node(data);
    head = temp;
    Tail = temp;
   }
   else{
  Node *temp = new Node(data);
  temp->next = NULL;
  temp->prev = Tail;
  Tail->next = temp;
   Tail = temp;
  
   }

}

void Insertatanyposition(Node*&head,Node*&tail,int data,int pos){
    if(pos ==1){
        InsertAtHead(head,tail,data);
        return ;
    }
    int cnt =0;
    Node * temp =head;
    while(cnt<pos-1){
        temp= temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        InsertAtTail(head,tail,data);
        
        return ;
    }
    Node*pickle = new Node(data);
     pickle->next = temp->next;
     temp->next->prev = pickle;
     pickle->prev =temp;
     temp->next = pickle;

}

void print(Node*&head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void Delete(Node*&head,Node*&tail,int pos){
  if(pos == 1){
    Node *temp = head;
    if(head ==tail){
        head =NULL;
        tail = NULL;
    }
    else{
    head = head->next;
    head->prev =NULL;
    }
    
    temp ->next =NULL;
    delete temp;
    return;
  }
  else{
    int cnt =1;
  Node *curr =head;
  Node *prev =NULL;
  while(cnt<pos){
    prev =curr;
   curr = curr->next;
   cnt++;
  }
  if(curr->next ==NULL){
    tail =curr->prev;
    prev->next =NULL;
    curr->prev =NULL;
    delete curr;
   return ;
  }
  prev->next = curr->next;
  curr->next->prev = prev;
  curr->next = NULL;
   delete curr;
   return;
  }
  

}

int main(){
    Node *temp =NULL;
    Node *head =temp;
    Node *tail = temp;
    InsertAtHead(head,tail,4);
    print(head);
      InsertAtHead(head,tail,5);
    print(head);
      InsertAtHead(head,tail,6);
    print(head);
      InsertAtHead(head,tail,7);
    print(head);
    InsertAtTail(head,tail,9);
    print(head);
     InsertAtTail(head,tail,8);
    print(head);
  InsertAtTail(head,tail,0);
    print(head);

   cout<<head->data<<endl;
   cout<<tail->data<<endl;

   cout<<"insertion at mid"<<endl;
   Insertatanyposition(head,tail,1,7);
   print(head);

   cout<<head->data<<endl;
   cout<<tail->data<<endl;

   cout<<"delete head"<<endl;
   Delete(head,tail,1);
   print(head);
      cout<<head->data<<endl;
   cout<<tail->data<<endl;

     cout<<"delete Tail"<<endl;
   Delete(head,tail,7);
   print(head);
      cout<<head->data<<endl;
   cout<<tail->data<<endl;
   cout<<"delete random"<<endl;
   Delete(head,tail,4);
   print(head);
      cout<<head->data<<endl;
   cout<<tail->data<<endl;
}


*/


//SINGLE LINKDEN LIST
/*
class Node{

    public:
    int data;
    Node * next;

    //constructor
    Node(int data){
        this->data =data;
        this ->next = NULL;
    }

    //delete constructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
           this->next =NULL;
        }
        cout<<"memory free"<<value<<endl;
    }
};

//insert at head
void insertathead(Node*&head,int data){
    if(head==NULL){
        Node * temp = new Node(data);
        head = temp;

    }
    else{
        Node * temp = new Node(data);
        temp->next = head;
        head =temp;
    }
}

//insert at tail
void insertatTail(Node*&Tail,int data){
    if(Tail==NULL){
        Node * temp = new Node(data);
        Tail = temp;

    }
    else{
        Node * temp = new Node(data);
        Tail -> next = temp;
        Tail = temp;
    }
}

//Insert any position
void Insertanyposition(Node*&head,Node*&Tail,int data,int pos){
    if(pos ==1){
        insertathead(head,data);
        return ;
    }
    int cnt =1;
    Node * temp = head;
     Node * tem = Tail;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next == NULL){
    insertatTail(Tail, data);
    return;
    }

    Node * kali = new Node(data);
    kali->next  = temp->next;
    temp->next = kali;
 
}

void print(Node*&head){
   Node * temp = head;
  
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   cout<<endl;
}
void Delete(Node*&head,Node*&Tail,int pos){
   if(pos==1){
     Node*temp =head;

      if(head == Tail) {
            head = NULL;
            Tail = NULL;
        }
        else {
            head = head->next;
        }

    temp->next = NULL;
    delete temp;
    return ;

   }
   else{
    int cnt =1;
    Node*curr = head;
    Node *prev =NULL;
   while(cnt<pos){
    prev = curr;
    curr = curr->next;
    cnt++;
   }
   if(curr->next ==NULL){
        Tail = prev;
     prev->next = NULL;
    delete curr;
    return;
   }
   prev->next = curr->next;
   curr->next =NULL;
   delete curr;
   }
   

}
int main(){
  Node*temp = new Node(5);
  Node *head =temp;
  Node * Tail = temp;
  insertatTail(Tail,6);
  insertathead(head,4);
  Insertanyposition(head,Tail,2,4);
  print(head);

  cout<<head-> data<<endl;
  cout<<Tail ->data<<endl;
  
    Delete(head,Tail,4);
    print(head);

  cout<<head-> data<<endl;
  cout<<Tail ->data<<endl;

}
  */