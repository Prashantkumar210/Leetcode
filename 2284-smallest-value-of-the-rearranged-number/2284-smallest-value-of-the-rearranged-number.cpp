class Solution {
public:
    long long smallestNumber(long long num) {
        
        int i=0;

        if(num<0){
            num = abs(num);
            string str = to_string(num);
            sort(str.rbegin(), str.rend());

            return -stoll(str);
        }
        else if(num>0){

            string str = to_string(num);
            sort(str.begin(), str.end());

            while(str[i]=='0') i++;
            char ch = str[i];
            str.erase(str.begin() + i);

            str = ch + str;

            return stoll(str);
        }

        return 0;
    }
};