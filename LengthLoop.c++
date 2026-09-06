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

    int findLengthOfLoop(ListNode *head) {
        ListNode*Slow = head;
        ListNode*Fast = Slow->next;

        while(Fast->next !=nullptr && Fast!=Slow){
             Fast = Fast->next->next;
             Slow = Slow ->next;
        }
        if(Fast->next==nullptr){
            return 0;
        }

        Slow = Fast->next;
       int cnt = 1;
       while(Fast!=Slow){
        Slow = Slow->next;
        cnt++;
       }
       return cnt;
    }
};

int main(){

  
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Loop: 4 -> 2
    head->next->next->next->next = head->next;
  Solution obj;
  int ans = obj.findLengthOfLoop(head);
  cout << ans << endl;

  return 0;
}