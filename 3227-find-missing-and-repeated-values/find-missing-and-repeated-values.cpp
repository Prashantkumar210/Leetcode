class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        unordered_map<int, int>mp;

        int n = grid.size();


        int sum = 0;
        int repeat = -1;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                mp[grid[i][j]]++;
                if(mp[grid[i][j]]==2) repeat = grid[i][j];
                sum += grid[i][j]; 
            }
        }

        sum = sum - repeat;
        n = n*n;

        int totalsum = (n*(n+1))/2;
        cout<<totalsum<<endl;
        
        int missing = totalsum - sum;

        vector<int>ans;

        ans.push_back(repeat);
        ans.push_back(missing);
        return ans;
    }
};