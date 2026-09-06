#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:

    void insertAtTail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* temp = new ListNode(val);

        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode* add(ListNode* l1, ListNode* l2) {

        int carry = 0;

        ListNode* anshead =NULL;
        ListNode* anstail = NULL;

        while (l1 != NULL && l2 != NULL) {

            int sum = carry + l1->val + l2->val;

            int digit = sum % 10;
           

            insertAtTail(anshead, anstail, digit);

             carry = sum / 10;

                l1 = l1->next;
                l2 = l2->next;
        }

        while(l1 !=NULL){
           int sum = carry + l1->val ;

            int digit = sum % 10;
           

            insertAtTail(anshead, anstail, digit);

             carry = sum / 10;

                l1 = l1->next;
        }

       while(l2 !=NULL){
             int sum = carry + l2->val;

            int digit = sum % 10;
           

            insertAtTail(anshead, anstail, digit);

             carry = sum / 10;

                l2 = l2->next;
        }

       if (carry != 0) {
    insertAtTail(anshead, anstail, carry);
}

        return anshead;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        
        
        // Step 1: add both lists
        ListNode* ans = add(l1, l2);

        // Step 2: reverse answer
        return ans;
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
    
     ListNode *tail = new ListNode(1);
      tail->next = new ListNode(2);
      tail->next->next = new ListNode(3);
      tail->next->next->next = new ListNode(4);
 
  Solution obj;
  
   ListNode* ans = obj.addTwoNumbers(head,tail);

    print(ans);
  

}