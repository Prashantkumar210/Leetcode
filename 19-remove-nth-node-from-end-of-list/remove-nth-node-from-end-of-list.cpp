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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;
        int count = 0;

        while(temp){
            ++count;
            temp = temp->next;
        }

        if(count==n){
            ListNode* newhead = head->next;
            head->next = NULL;
            delete head;
            return newhead;
        }

        int posti = count-n;

       
        ListNode* Prev = head;

        int c = 1;
        while(c<posti){
            Prev = Prev->next;
            ++c;
        }

        if(Prev->next){
            ListNode* Next = Prev->next->next;
            ListNode* curr = Prev->next;
            curr->next = NULL;
            Prev->next = NULL;
            delete curr;
            Prev->next = Next; 
        }
        else{
            Prev->next = NULL;
        }

        return head;
    }
};