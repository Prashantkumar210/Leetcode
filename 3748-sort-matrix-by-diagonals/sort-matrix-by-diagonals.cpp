class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n,vector<int>(n));
        unordered_map<int,vector<int>> diag;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               diag[i-j].push_back(grid[i][j]);
            }
        }

        for(auto d:diag){
            if(d.first>=0){
                sort(diag[d.first].begin(),diag[d.first].end());
            }
            else{
                sort(diag[d.first].begin(),diag[d.first].end(),greater<int>());
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               grid[i][j]=diag[i-j].back();
               diag[i-j].pop_back();
            }
        }
        return grid;
    }
};