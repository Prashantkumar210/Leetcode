class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        
        int sum = 0;

        for(int i=0; i<commands.size(); i++){

            if(commands[i]=="RIGHT"){
                sum += 1;
            }
            else if(commands[i]=="DOWN"){
                sum += n;
            }
            else if(commands[i]=="UP"){
                sum -= n;
            }
            else{
                sum -= 1;
            }
        }

        return sum;
    }
};