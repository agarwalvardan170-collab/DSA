#include<iostream>
using namespace std;

/*
Definition of singly linked list:
struct ListNode*/

class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};


class Solution {
public:
ListNode* floorcycle(ListNode *head){
        if(head == NULL){
            return NULL;
        }

        ListNode* slow  = head;
        ListNode* fast = head;

        while(slow != NULL && fast != NULL){
           
            fast =fast->next;

            if(fast!=NULL){

                fast = fast -> next;

            }
            
            slow = slow -> next;

            if( slow == fast ){
                return slow;
            }
        }
        return NULL;
}
    ListNode *findStartingPoint(ListNode *head) {
       if(head==NULL){
        return NULL;
       }
       ListNode*Intersection = floorcycle(head);
        // No cycle
        if(Intersection == NULL){
            return NULL;
        }
       ListNode*slow =  head;

      while(slow != Intersection){
        slow = slow -> next;
        Intersection = Intersection -> next;
      }
     
      return slow;
    }

    //for remove the loop
 void removeLoop(ListNode*head){
    if(head ==NULL){
         return ;
    }
    ListNode*startofloop = findStartingPoint(head);
    ListNode*temp = startofloop;

    while(temp->next != startofloop){

        temp = temp->next;
    }

    temp->next = NULL;

}
};

