class Solution {
public:
    int countEven(int num) {
        

        int count = 0;

        for(int i=2; i<=num; i++){
            
            int sum = 0;
            int j = i;
            while(j>0){
                int digit = j%10;
                sum += digit;
                j = j/10;
            }

            if(sum%2==0) ++count;
        }

        return count;
    }
};