class Solution {
public:
    string digitSum(string s, int k) {
        
        if(s.length()<k) return s;
        if(s.length()==k) return s;

        string temp = "";

        int i = 0;
        
        int count = 0;
        int sum = 0;

        while(i<s.length()){
            int digit = s[i]-'0';
            sum += digit;
            ++count;

            if((count == k) ||(i == s.length()-1)){
                count = 0;
                temp += to_string(sum);
                sum = 0;
            }
            ++i;
        }

        return digitSum(temp, k);
    }
};