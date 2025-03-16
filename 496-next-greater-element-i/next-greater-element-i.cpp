class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int>mp;

        stack<int>st;

        st.push(-1);

        for(int i=nums2.size()-1; i>=0; i--){

            while(st.top()!=-1){

                if(st.top()>nums2[i]){
                    break;
                }
                st.pop();
            }

            mp[nums2[i]] = st.top();
            st.push(nums2[i]);
        }

        vector<int>ans;
        for(int i=0; i<nums1.size(); i++){

            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};