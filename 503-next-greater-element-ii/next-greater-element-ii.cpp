class Solution {
public:
    vector<int> nextGreaterElements(vector<int>&a) {
        int n=a.size();
        vector<int>ans(n);
        stack<int>stk;
        for(int i=n-1;i>=0;i--){
            stk.push(a[i]);
        }
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && stk.top()<=a[i]){
                stk.pop();
            }
            if(stk.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=stk.top();
            }
            stk.push(a[i]);
        }
        return ans;
    }
};