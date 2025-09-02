class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        set<int>ans;

        for(int i=0; i<digits.size(); i++){
            if(digits[i]==0) continue;
            for(int j=0; j<digits.size(); j++){
                if(i==j) continue;
                for(int k=0; k<digits.size(); k++){
                    if(digits[k]%2!=0) continue;
                    if(i==k || k==j) continue;
                    int num = digits[i]*100 + digits[j]*10 +digits[k];
                    ans.insert(num);
                }
            }
        }

        return ans.size();
    }
};