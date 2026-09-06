#include<iostream>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode*next;
    ListNode*prev ;

    ListNode(int d){
      this->data =d;
      this -> next = NULL;
      this -> prev =NULL;
    }
};

void Insertathead(ListNode*&head,int data){
    if(head == NULL){
        ListNode*kali = new ListNode(data);
        head = kali;
    }
    else{
        ListNode*kali = new ListNode(data);
        kali->next = head;
        head->prev = kali;
        head =kali;
    }
}

void print(ListNode*&head){
    ListNode*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
    
        temp =temp->next;
    }
    cout<<endl;
}

ListNode*reverse(ListNode*&head){
    ListNode*phla = NULL;
    ListNode*curr = head;
    ListNode*forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = phla;
        curr->prev = forward;
       phla = curr;
       curr = forward;
    } 
    return phla;
}

int main(){
    ListNode* temp =new ListNode(30);
    ListNode*head = temp;
    Insertathead(head,20);
    Insertathead(head,10);
    print(head);
    cout<<head->data<<endl;
    cout<<reverse(head)<<endl;
    cout<<head->data<<endl;
}