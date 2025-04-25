class comp {
public:
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, comp> pq;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for (int list = 0; list < lists.size(); list++) {
            ListNode* temp = lists[list];
            if (temp)
                pq.push(temp);    
        }

        while(!pq.empty()) {
            ListNode* front = pq.top();
            pq.pop();

            if (!head && !tail) {
                head = front;
                tail = front;
            }
            else {
                tail->next = front;
                tail = front;
            }

            if (tail->next) {
                pq.push(tail->next);
            }
        }
        return head;
    }
};