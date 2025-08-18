class Solution {
public:

    static bool comperator(string a, string b){

        string temp1 = a+b;
        string temp2 = b+a;

        return temp1>temp2;
    }

    string largestNumber(vector<int>& nums) {
        
        vector<string>str;

        for(int i=0; i<nums.size(); i++){

            str.push_back(to_string(nums[i]));
        }

        sort(str.begin(), str.end(), comperator);

        string ans;
        if(str[0]=="0") return "0";
        
        for(int i=0; i<str.size(); i++){
            ans += str[i];
        }

        return ans;
    }
};  