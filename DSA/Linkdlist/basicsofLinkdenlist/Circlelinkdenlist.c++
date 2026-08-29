#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data =data;
        this->next = NULL;
    }
    ~Node(){
        int value = this ->data;
         if(this->next !=NULL){
            delete next;
            next = NULL;
         }
         cout<<"free memory the data"<<value<<endl;
    }

};


void insertNode(Node* &tail,int element,int d){
  //assuming that the element is prsent in the list
  if(tail == NULL){
    Node * newNode = new Node(d);
    tail =newNode;
    newNode->next = newNode;
  }
  else{
    //non empty list
     Node * curr = tail;
     
     while(curr->data!=element){
        curr = curr->next;
     }
     //element fund then 
      Node * temp = new Node(d);
     temp->next = curr ->next;
     curr->next = temp;
  }
}

void Delete(Node*&tail,int value){
    if(tail ==NULL){
        cout<<"List is wmpty.please checkk again"<<endl;
        return ;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node*prev = prev;
        Node*curr = prev->next;
        while(curr -> data  != value){
            prev = curr;
            curr = curr->next;
        } 
        prev -> next = curr->next;
        // 1 Node Linked List
        if(curr == prev){
            tail =NULL;
        }
        // >=2 ke liye
        else{
           if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
        }
       
    }
}  
void print(Node* tail){

    if(tail ==NULL){
        cout<<"List is empty"<<endl;
    }

    Node *temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    } while(tail != temp);

    cout<<endl;
}

bool checkcirclurlinkdinlist(Node*tail){
    Node*temp =tail->next;
    if(tail ==NULL){
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

int main(){
  Node *tail = NULL;
  //insert list me insert krre hai
   insertNode(tail,5,3);
   print(tail);
    insertNode(tail,3,5);
     print(tail);

      insertNode(tail,5,7);
      print(tail);
  
      insertNode(tail,7,9);
      print(tail);
   int ans  =  checkcirclurlinkdinlist(tail);
   if(ans==1){
      cout<<"circular linkdinlist"<<endl;
   }
   else{
    cout<<"not a circular linkdin list"<<endl;
   }

  //Delete(tail,9);
  //print(tail);
}