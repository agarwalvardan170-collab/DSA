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
int Length(ListNode*head){
    ListNode*temp = head;
    int cnt=0;
    while(temp!=nullptr){
        temp=temp->next;
        cnt++;

    }
return cnt;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode*temp = head;
        if(temp->next ==nullptr && n==1){
            return nullptr;
        }
        ListNode*kali = head;
        int fulllength = Length(head);
        int pos = fulllength - n;
        if(pos==0){
            temp =temp->next;
            return temp;
        }
        int cnt = 1;
        while(cnt <= pos-1 ){
            temp = temp ->next;
            cnt++;
        }
        
            temp->next = temp->next->next;
        
        
        return head;
    }
};
void print(ListNode*head){
  ListNode*temp =head;
  while(temp!=nullptr){
    cout<<temp->val<<endl;
    temp =temp -> next;
  }
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

  ListNode*ans = obj.removeNthFromEnd(head,2);

  print(ans);
}