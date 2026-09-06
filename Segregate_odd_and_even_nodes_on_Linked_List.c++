#include<iostream>
using namespace std;

class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};

class Solution {
    public:
        ListNode* oddEvenList(ListNode* &head) {
               ListNode*odd = head;
        if(head ==nullptr){
            return head;
        }
        if(head->next == nullptr){
            return head;
        }
        ListNode*even = odd->next;
        ListNode*prev = head->next;

        while(odd->next!=nullptr && even->next!=nullptr){
            odd->next = odd->next->next;
            even->next =even->next->next;
            odd = odd->next;
            even = even ->next;
        }
        if(odd!=nullptr){
           
            odd->next = prev;
        }
    
        return head;
        }
};
void print(ListNode*&head){
  ListNode*temp = head;
  while(temp!=NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
  }
  cout<<endl;
}
int main(){
   
  ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next= new ListNode(5); 
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);

  Solution obj;
  ListNode* ans = obj.oddEvenList(head);

  print(ans);

 
}