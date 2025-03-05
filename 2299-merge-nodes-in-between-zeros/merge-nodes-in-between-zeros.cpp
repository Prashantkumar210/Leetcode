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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head->next;

        int sum = 0;

        while(fast){

            sum += fast->val;
            if(fast->val == 0){
                slow->val = sum;
                sum = 0;
                slow = slow->next;
            }
            fast = fast->next;
        }

        ListNode* curr = head;

        while(curr->next!=slow){
            curr = curr->next;
        }

        curr->next = NULL;
        delete slow;
        return head;
    }
};