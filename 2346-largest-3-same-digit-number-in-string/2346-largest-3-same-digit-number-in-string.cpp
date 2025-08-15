class Solution {
public:
    string largestGoodInteger(string num) {

        string ans = "";
        for(int i=0; i<=num.size()-3; i++){

            string temp = "";
            int j = 0;
                while(num[i]==num[i+j] && j<3){
                    temp += num[i];
                    ++j;
                }
            if(j==3 && temp>ans) ans = temp;
        }

        return ans;
    }

};