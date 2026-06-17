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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head->next==NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast!=NULL){
            slow = slow->next;
            
            if(fast->next!=NULL){
                fast = fast->next->next;
            }
            else fast = fast->next;
        }

        ListNode* temp = head;

        while(temp->next!=slow){
            temp = temp->next;
        }

        ListNode* Next = slow->next;

        temp->next = NULL;
        temp->next = Next;

        return head;
    }
};