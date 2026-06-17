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
    int pairSum(ListNode* head) {
         
        ListNode *slow = head;
        ListNode *fast = head->next;

        while(fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* curr = slow->next;
        slow->next = NULL;

        //  Reversal 
        ListNode* prev = NULL;

        while(curr!=NULL){
            ListNode *Next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = Next;
        }

        ListNode* temp1 = head;
        ListNode* temp2 = prev;

        int ans = 0;

        while(temp1!=NULL){
            int sum = temp1->val+temp2->val;
            if(sum>ans) ans = sum;

            temp1 = temp1->next;
            temp2 = temp2->next;
        } 

        return ans;
    }
};