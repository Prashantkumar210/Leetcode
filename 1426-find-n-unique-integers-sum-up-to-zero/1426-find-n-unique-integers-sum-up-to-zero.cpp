class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int>ans;
        if(n%2==0){
            int m = n/2;
            for(int i=1; i<=m; i++){
                ans.push_back(i);
            }
            m = -(n/2);

            for(int i=m; i<0; i++){
                ans.push_back(i);
            }
        }
        else{
             int m = n/2;
            for(int i=1; i<=m; i++){
                ans.push_back(i);
            }
            ans.push_back(0);
            m = -(n/2);

            for(int i=m; i<0; i++){
                ans.push_back(i);
            }
        }

        return ans;
    }
};