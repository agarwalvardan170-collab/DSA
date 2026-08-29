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

//first approach
/*
int middle(ListNode*&head,int len){
    ListNode*temp = head;
    int cnt =0;
    
    while(cnt<(len/2)){
        temp = temp->next;
        cnt++;
    }
    
  
    return temp->data;
    
}
int getlength(ListNode*head){
   ListNode*temp = head;
   int cnt =0;
    while(temp !=NULL){
       cnt++;
        temp = temp->next;
    }
    return cnt;
}*/ 

//Second approach
/** 
ListNode* reverse(ListNode*&head){
   ListNode*fast =  head->next;
   ListNode*slow = head;
   while(fast !=NULL){
    fast =fast ->next;
    if(fast!=NULL){
        fast = fast->next;
    }
    slow = slow->next;
   }
   return slow;
}
   */
   

int main(){
    ListNode* temp = new ListNode(3);
    ListNode*head = temp;
    InsertatHead(head,1);
    print(head);
    InsertatHead(head,7);
    print(head);
    InsertatHead(head,8);
    print(head);
    InsertatHead(head,3);
    print(head);

    //second approach
    /*cout<<reverse(head);*/
    //first approch
   /**int len = getlength(head);
    cout<<middle(head,len);*/


}