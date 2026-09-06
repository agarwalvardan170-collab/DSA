#include<iostream>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode*next;

    ListNode(int d){
      this->data = d;
      this->next = NULL;
    }

};
void InsertatHead(ListNode*&head,int data){
    if(head ==NULL){
         ListNode*kali = new ListNode(data);
        kali->next  = NULL;
      head = kali;
     
      return;
    }
    else{
        ListNode*kali = new ListNode(data);
      kali->next  = head;
      head = kali;
   
    }
}
void print(ListNode*&head){
    ListNode*temp = head;
    while(temp !=NULL){
            
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
ListNode* reverseList(ListNode* head) {
        ListNode*prev = NULL;
        ListNode*curr = head;
        ListNode*forward = curr->next;
         while(curr->next!=NULL){
            curr->next = prev;
            
            prev = curr;
              
            curr = forward;
             
            forward = curr->next;
           
         }
         return head;
    }
int main(){
    ListNode*kalu = new ListNode(5);
    ListNode*head =kalu;
    InsertatHead(head,4);
    InsertatHead(head,3);
     InsertatHead(head,2);
    InsertatHead(head,1);
    print(head);

    cout<<reverseList(head);

}