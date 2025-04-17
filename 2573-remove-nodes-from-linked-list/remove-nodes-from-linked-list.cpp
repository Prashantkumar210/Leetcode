class Solution {
public:

    ListNode* ReverseTree(ListNode* head){

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr){

            ListNode* forward = curr->next;
            curr->next = prev;

            prev = curr;
            curr = forward;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        
        head = ReverseTree(head);
        stack<ListNode*>st;
        ListNode* temp = head;
        
        while(temp){
            if(st.empty()){
                st.push(temp);
            }
            else{
                ListNode* Top = st.top();
                if(Top->val<=temp->val){
                    st.push(temp);
                }
            }    

            temp = temp->next;    
        }
    

        ListNode* NewHead = new ListNode(-1);
        ListNode* trav = NewHead;
       
        while(!st.empty()){
            ListNode* curr = st.top();
            st.pop();

            trav->next = curr;
            trav = trav->next;
        }

        trav->next = NULL;
        return NewHead->next;
    }
};