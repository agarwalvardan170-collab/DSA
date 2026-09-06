#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = nullptr;
    }
    ListNode(int data1)
    {
        val = data1;
        next = nullptr;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};


class Solution {
public:
    ListNode* deleteMiddle(ListNode* &head) {
          ListNode*slow = head;
        ListNode*fast = head->next;

          if(head->next == nullptr){
            return NULL;
          }
     
        while(fast != nullptr && fast->next != nullptr && fast->next->next != nullptr){
          
            fast = fast ->next->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;

    }
};
void print(ListNode*head){
  ListNode*temp = head;
  while(temp!=nullptr){
    cout<<temp->val<<endl;
    temp = temp->next;
  }
  cout<<endl;
}
int main(){

  
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

 
  Solution obj;
  
ListNode* ans = obj.deleteMiddle(head);

  print(ans);

  return 0;
}