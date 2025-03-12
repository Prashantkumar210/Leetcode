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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int>temparr;

        while(head){
            temparr.push_back(head->val);
            head = head->next;
        }

        stack<int>st;
        

        for(int i=0; i<temparr.size(); i++){

                while(!st.empty() && temparr[st.top()]<temparr[i]){
                    int index = st.top();
                    temparr[index] = temparr[i];
                    st.pop();
                }
            st.push(i);
        }

        while(!st.empty()){
            temparr[st.top()] = 0;
            st.pop();
        }

        temparr[temparr.size()-1] = 0;

        return temparr;
    }
};