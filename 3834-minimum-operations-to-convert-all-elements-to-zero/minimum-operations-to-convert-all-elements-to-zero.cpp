class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mpp;
        stack<int> st;
        
        int count = 0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0 && mpp[nums[i]]==0){
                mpp[nums[i]]++;
                count++;
            }
            else if(nums[i]==0){
                st.push(0);
                continue;
            }
            else{
                while(!st.empty() && st.top()!=nums[i]){
                    if(st.top()<nums[i]){
                        count++;
                        break;
                    }
                    st.pop();
                }
            }
            st.push(nums[i]);
        }
        return count;
    }
};