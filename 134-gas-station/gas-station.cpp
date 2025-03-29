class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int loss = 0;
        int rupee = 0;

        int index = 0;


        for(int i=0; i<gas.size(); i++){

            rupee += gas[i]-cost[i];

            if(rupee<0){
                loss += rupee;
                index = i+1;
                rupee = 0;
            }
        }

        if(abs(loss)<=rupee) return index;

        return -1;
    }
};