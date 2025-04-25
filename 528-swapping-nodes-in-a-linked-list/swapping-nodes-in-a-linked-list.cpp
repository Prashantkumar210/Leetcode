class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *tempA = head, *tempB = head;
        for (int i = 0; i < k-1; i++) tempB = tempB->next;
        ListNode *temp = tempB;
        while (tempB->next) {
            tempA = tempA->next;
            tempB = tempB->next;
        }

        swap(temp->val, tempA->val);
        return head;
    }
};