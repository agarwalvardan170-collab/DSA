#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    //constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    //delete constructor
    ~Node(){
        int val = this-> data;
        while(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data"<<val<<endl;
    }
};

void print(Node* head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len =0 ;
    Node*temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void InsertAtHead(Node*&head,Node*&tail,int data){
    if(head==NULL){
        Node* temp = new Node(data);
        head =temp;
        tail = temp;
    }
    else{
        Node*temp = new Node(data);
        temp->next = head;
        head->prev= temp;
        head = temp;
    }
    
}
void InsertAtTail(Node*&tail,Node *&head,int data){
    if(tail == NULL){
      Node*node1 = new Node(data);
      tail = node1;
      head = node1;
    }
    else{
      Node*temp = new Node(data);
      tail->next = temp;
      temp->prev = tail;
      tail = temp;
    }
    
}

void InsertAtAnyPosition(Node*&head,Node*
&tail,int data,int position){

    if(position == 1){
        InsertAtHead(head,tail,data);
        return ;
    }
    
    Node*kali = head;
    Node * tich = tail;
    int cnt =1;
    while(cnt<position-1){
        kali = kali->next;
        cnt++;
    }
    
    if(kali->next == NULL){
        InsertAtTail(tail,head,data);
        return ;
    }
    //creat new node
    Node * temp = new Node(data);
     //and insert node
      
     temp->next = kali->next;
     kali->next->prev = temp;
     kali->next = temp;
     temp->prev = kali;
   

}

//for deletion
void Delete(Node*&head,int position){
    if(position==1){
      Node*temp  = head;
      temp->next->prev = NULL;
      head = temp->next;
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
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;

    delete curr;

    }
   
}
 
int main(){
   
    Node*head =NULL;
    Node*tail = NULL;
    print(head);
    //cout<<getLength(head);
    InsertAtHead(head,tail,11);
    print(head);
    InsertAtHead(head,tail,13);
    print(head);
    InsertAtHead(head,tail,8);
    print(head);

    InsertAtTail(tail,head,25);
    print(head);
    
    InsertAtAnyPosition(head,tail,100,2);
    print(head);
    
       InsertAtAnyPosition(head,tail,101,1);
    print(head);
      InsertAtAnyPosition(head,tail,102,7);
    print(head);


    Delete(head,7);
    print(head);
    cout<<"head"<<head->data <<endl;
    cout<<"tail"<<tail->data<<endl;
}
