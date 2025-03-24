/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* curr = node;
        ListNode* Next = node->next;

        while(Next){
            swap(curr->val, Next->val);
            Next = Next->next;
            curr = curr->next;
        }

        ListNode* temp  = node;
        
        while(temp->next->next){
            temp = temp->next;
        }

        temp->next = NULL;

    }
};