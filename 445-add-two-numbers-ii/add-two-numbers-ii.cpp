/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
        ListNode* prev1 = NULL;
        ListNode* curr = l1;

        while(curr){

            ListNode* forward = curr->next;
            curr->next = NULL;
            curr->next = prev1;
            prev1 = curr;
            curr = forward;
        }


        ListNode* prev2 = NULL;
        curr = l2;

        while(curr){

            ListNode* forward = curr->next;
            curr->next = NULL;
            curr->next = prev2;
            prev2 = curr;
            curr = forward;
        }

        ListNode* head = NULL;
        ListNode* temp = head;
        int carry = 0;

        while(prev2 && prev1){
            int val1 = prev1->val;
            int val2 = prev2->val;

            int sum = val1 + val2+carry;

            int digit = sum%10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digit);

            if(!head){
                head= newNode;
                temp = head;
            }
            else{
                temp->next = newNode;
                temp = newNode;
            }

            prev1 = prev1->next;
            prev2 = prev2->next;
        }

        while(prev1){
            int value = prev1->val;
            int sum = carry+value;
            int digit = sum%10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digit);

            if(head==NULL){
                head=newNode;
                temp = head;
            } 
            else{
                temp->next = newNode;
                temp = newNode;
            }
            prev1 = prev1->next;
        }

        while(prev2){
            int value = prev2->val;
            int sum = carry+value;

            int digit = sum%10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digit);

            if(!head){
                head = newNode;
                temp = head;
            }
            else{
                temp->next =  newNode;
                temp = newNode;
            }

            prev2 = prev2->next;
        }

        if(carry>0){
            ListNode* newNode = new ListNode(carry);
            temp->next = newNode;
            carry = 0;
        }

        ListNode* prev = NULL;
        curr = head;

        while(curr){
            ListNode* forward = curr->next;
        
            curr->next = prev;
            prev =  curr;
            curr = forward;
        }

        if(!prev) return prev;

        ListNode* newHead = prev;

        while(newHead && newHead->val==0 && newHead->next){
            ListNode* temp = newHead;
            newHead = newHead->next;
        }

        return newHead;
    }
};