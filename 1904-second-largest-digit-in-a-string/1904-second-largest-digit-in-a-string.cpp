class Solution {
public:
    int secondHighest(string s) {
        
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for(int i=0; i<s.length(); i++){

            if(isdigit(s[i])){
                int digit = s[i]-'0';
                if(digit>largest) largest = digit;
            }
        }

        for(int i=0; i<s.length(); i++){

            if(isdigit(s[i])){
                int digit = s[i]-'0';
                if(digit<largest && digit>secondLargest) secondLargest = digit;
            }
        }

        if(secondLargest==INT_MIN) return -1;
        return secondLargest;        
    }
};