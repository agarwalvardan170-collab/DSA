//APPROACH -2 

// Space complexity  - o(1)
// Time Complexity - o(n)

/*
Definition of singly linked list:
struct ListNode
{
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
*/

class Solution {
public:
 ListNode* checkmiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
ListNode*reversemiddle(ListNode*middle){
    ListNode*temp = middle;
    ListNode*curr = middle;
    ListNode*prev = nullptr;
   ListNode*next = nullptr;
    while(curr != nullptr){
      ListNode*next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
     
     if(head == nullptr || head->next == nullptr){
        return true;
    }

     //step -1 to find middle
     ListNode*middle = checkmiddle(head);
     ListNode*kali = middle->next;
     //step -2 to reverse lindln list
     middle->next =  reversemiddle(kali);
     //step -3 to compare the linkdln list it is pailindrom or not

     //creat to head1 and head2 for compare the list
     ListNode*head1 = head;
     ListNode*head2 = middle -> next;
     
     //comapare
     while(head2 != nullptr){
        if(head1->val != head2 -> val){
           return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
     }
     
     middle->next = reversemiddle(middle->next);

     return true;
    
    }
};



// Approach - 1
/*<!-- Describe your approach to solving the problem. -->
this is the brute force appproach you are creating the vector and intalise the linkdln list data and afte you simply check n vector it is a pailindrom or not*/
//# Complexity
//- Time complexity:
/*<!-- Add your time complexity here, e.g. $$O(n)$$ -->
0(n)*/

//- Space complexity:
/*<!-- Add your space complexity here, e.g. $$O(n)$$ -->
o(n)*/

// Code


 //Definition for singly-linked list.
 #include<vector>
 using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution{
public:
bool check(vector<int> & nums){
    int s = 0;
    int e = nums.size()-1;
    while(s<=e){
        if(nums[s]!=nums[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        ListNode*temp = head;

        while(temp!=nullptr){
            nums.push_back(temp->val);
            temp = temp->next;
        }
        return check(nums);
    }
};
