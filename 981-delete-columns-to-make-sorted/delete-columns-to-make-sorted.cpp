class Solution {
public:

    int find(vector<string>&strs, int i){
        for(int j=0; j<strs.size()-1; j++){
            if(strs[j][i]>strs[j+1][i]) return 1;
        }

        return 0;
    }
    
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        for(int i=0; i<strs[0].size(); i++){
            count += find(strs, i);
        }
        return count;
    }
};