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

    ListNode* ans(ListNode* &head){

        if(head==NULL) return NULL;
        if(head->next ==NULL) return head;

        ListNode* curr = head;
        
        while(curr!=NULL){
            if(curr->next!=NULL && curr->next->val==curr->val){
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
            }
        }

        return head;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp = head;
       return ans(temp);
    }
};