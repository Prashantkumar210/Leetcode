class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        unordered_map<int, int>mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        ListNode* NewHead = new ListNode(-1);

        ListNode* temp = head;
        ListNode* tail = NewHead;

        while(temp){
            ListNode* forward =  temp->next;
            temp->next = NULL;

            if(mp[temp->val]==0){
                tail->next = temp;
                tail = tail->next;
            }

            temp = forward;
        }

        return NewHead->next;
    }
};