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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        vector<int>ans;

        if(!head || !head->next || !head->next->next){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* forward = curr->next;

        int mini = INT_MAX;
        int justmini = INT_MAX;
        int maxi = INT_MIN;

        int index = 2;

        while(forward){

            if((curr->val>prev->val && curr->val>forward->val) ||
                (curr->val<prev->val && curr->val<forward->val)){

                if(mini==INT_MAX) mini = index;
                
                if(index>maxi){
                    
                    if(maxi!=INT_MIN){
                        if(justmini>index-maxi){
                            justmini = index-maxi;
                        }
                       
                    }
                    
                }
                maxi = index;
            }
            prev = curr;
            curr = forward;
            forward = forward->next;

            index++;
        }

        
        if(mini!=INT_MAX && mini!=maxi){

            if(justmini!=INT_MAX){
                
                int maxval = maxi-mini;
               

                ans.push_back(justmini);
                ans.push_back(maxval);
            }
            else{
                int maxval = maxi-mini;
                int minval = maxi-mini;

                ans.push_back(minval);
                ans.push_back(maxval);
            }
        }
        else{
            ans.push_back(-1);
            ans.push_back(-1);
        }

        return ans;
    }
};