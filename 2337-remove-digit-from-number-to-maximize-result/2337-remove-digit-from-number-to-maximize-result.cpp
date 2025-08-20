class Solution {
public:
    string removeDigit(string number, char digit) {
        
        string finalans = "0";

        for(int i=0; i<number.length(); i++){
            string temp = number;

            if(number[i]==digit){
                temp.erase(i,1);
                finalans = max(finalans, temp);
            }
        }

        return finalans;
    }
};